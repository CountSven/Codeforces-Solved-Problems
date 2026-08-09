#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, k;
		string a, b;
		cin >> n >> k >> a >> b;

		map<char, int> have, need;

		for ( char c : a ) have[c]++;
		for ( char c : b ) need[c]++;

		int f = 0;

		for ( auto [ nc, nv ] : need ) {
			int tot = nv;
			vector<char> ch;
			for ( auto &[ cc, cv ] : have ) {
				if ( cc < nc ) {
					int cur = min( tot / k, cv / k );
					int val = cur * k;
					tot -= val;
					cv -= val;
				}
				else if ( cc == nc ) {
					int val = min( tot, cv );
					tot -= val;
					cv -= val;
				}
				else break;
				// cout << nc << " " << tot << " -> " << cc << " " << cv << "\n";
				if ( !cv ) ch.push_back( cc );
				if ( !tot ) break;
			}
			for ( auto u : ch ) have.erase( u );
			if ( !tot ) continue;
			else {
				f = 1;
				break;
			}
		}

		if ( !f ) cout << "Yes" << "\n";
		else cout << "No" << "\n";
	} 

	return 0;
}
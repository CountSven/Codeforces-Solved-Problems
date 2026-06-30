#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int q;
	cin >> q;

	while ( q-- ) {
		int n;
		cin >> n;

		map<int, int> mp;

		for ( int i = 0, x; i < n; i++ ) {
			cin >> x;
			mp[x]++;
		}

		vector<int> v;

		for ( auto [x, y] : mp ) v.push_back( y );

		sort( v.rbegin(), v.rend() );
		
		long long sz = 0, last = 0;	
	
		for ( auto u : v ) {
			if ( !last ) last = u;
			else {
				if ( u >= last ) last--;
				else last = u;
			}
			sz += last;
			if ( !last ) break;
		}

		cout << sz << "\n";
	}

	return 0;
}
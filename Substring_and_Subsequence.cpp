#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		string a, b;
		cin >> a >> b;

		int res = a.size() + b.size();

		for ( int i = 0; i < b.size(); i++ ) {
			int idx = i;
			int cur = a.size() + i;

			for ( char c : a ) {
				if ( idx < b.size() && c == b[idx] ) idx++;
			}

			cur += ( b.size() - idx );

			res = min( res, cur );
		}

		cout << res << "\n";
	}

	return 0;
}
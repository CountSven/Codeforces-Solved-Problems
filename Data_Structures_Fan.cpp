#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n;
		cin >> n;
		int a[n];

		for ( int i = 0; i < n; i++ ) cin >> a[i];

		string s;
		cin >> s;

		vector<vector<int>> prefXor( n+1, vector<int>( 2, 0 ) );

		for ( int i = 0; i < n; i++ ) {
			prefXor[i+1][0] ^= prefXor[i][0];
			prefXor[i+1][1] ^= prefXor[i][1];
			
			if ( s[i] == '0' ) prefXor[i+1][0] ^= a[i];
			else prefXor[i+1][1] ^= a[i];
		}

		int q, x0 = prefXor[n][0], x1 = prefXor[n][1];
		cin >> q;

		while ( q-- ) {
			int tp, l , r, val;
			cin >> tp;

			if ( tp == 1 ) {
				cin >> l >> r;
				
				int p0 = prefXor[r][0] ^ prefXor[l-1][0];
				int p1 = prefXor[r][1] ^ prefXor[l-1][1];
				
				x0 ^= p0;
				x0 ^= p1;
				x1 ^= p1;
				x1 ^= p0;
			}
			else {
				cin >> val;
				
				if ( !val ) cout << x0 << " ";
				else cout << x1 << " ";
			}
		}
		cout << "\n";
	}

	return 0;
}
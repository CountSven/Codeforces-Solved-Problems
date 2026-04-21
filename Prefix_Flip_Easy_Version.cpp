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
		string a, b;
		cin >> n >> a >> b;

		vector<int> res;

		while ( a != b ) {
			int pos = n-1;
			for ( int i = n-1; i >= 0; i-- ) {
				if ( a[i] != b[i] ) {
					pos = i;
					break;
				}
			}
			if ( a[0] != a[pos] ) {
				res.push_back( 0 );
				if ( a[0] == '0' ) a[0] = '1';
				else a[0] = '0';
			}
			for ( int i = 0; i <= pos; i++ ) {
				if ( a[i] == '0' ) a[i] = '1';
				else a[i] = '0';
			}
			reverse( a.begin(), a.begin()+pos+1 );
			// cout << a << "\n";
			res.push_back( pos );
			if ( a == b ) break;
		}

		cout << res.size() << " ";
		for ( auto u : res ) cout << u + 1 << " ";
		cout << "\n";
	}

	return 0;
}
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
		vector<int> v(n+1), idx( 1001, -1 );

		for ( int i = 1; i <= n; i++ ) {
			cin >> v[i];
			idx[v[i]] = i;
		}

		int mx = *max_element( v.begin(), v.end() );

		int res = -1;

		for ( int i = 1; i <= mx; i++ ) {
			for ( int j = i; j <= mx; j++ ) {
				if ( idx[i] != -1 && idx[j] != -1 && __gcd( i, j ) == 1 ) res = max( res, idx[i] + idx[j] );
			}
		}

		cout << res << "\n";
	}

	return 0;
}
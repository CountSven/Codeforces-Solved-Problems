#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	vector<int> v(n), cur;

	for ( int i = 0; i < n; i++ ) cin >> v[i];
	
	int res = 0;
	
	for ( int i = 0; i < n; i++ ) {
		for ( int j = i; j < n; j++ ) {
			cur = v;

			for ( int k = i; k <= j; k++ ) {
				if ( cur[k] == 0 ) cur[k] = 1;
				else cur[k] = 0;
			}

			// for ( auto u : cur ) cout << u << " ";
			// cout << "\n";

			int val = count( cur.begin(), cur.end(), 1 );
			res = max( res, val );
		}
	}

	cout << res << "\n";

	return 0;
}
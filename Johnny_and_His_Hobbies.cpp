#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, res = -1;
		cin >> n;
		vector<int> v(n), vis( 1024, 0 );

		for ( int i = 0; i < n; i++ ) {
			cin >> v[i];
			vis[v[i]] = 1;
		}

		for ( int i = 1; i <= 1024; i++ ) {
			int f = 0;
			set<int> st;

			for ( int j = 0; j < n; j++ ) {
				int cur = v[j] ^ i;
				// cout << cur << " ";

				if ( cur > 1024 || !vis[cur] ) {
					f = 1;
					break;
				}
				else st.insert( cur );
			}
			// cout << "\n";

			if ( f ) continue;
			else if ( st.size() == n ) {
				res = i;
				break;
			}
		}

		cout << res << "\n";
	}

	return 0;
}
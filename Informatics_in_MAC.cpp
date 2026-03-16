#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, mx = 0;
		cin >> n;
		vector<int> v(n), vis( n+1, 0 );

		set<int> st;

		for ( int i = 0; i < n; i++ ) {
			cin >> v[i];
			vis[v[i]] = 1;
			st.insert( v[i] );
			mx = max( mx, v[i] );
		}

		if ( st.size() == 1 ) cout << 2 << "\n" << "1 1" << "\n" << "2 " << n << "\n";
		else {
			int mex = -1;

			for ( int i = 0; i <= n; i++ ) {
				if ( !vis[i] ) {
					mex = i;
					break;
				}
			}

			// cout << mx << "\t" << mex << "\n";

			if ( mex == 0 ) cout << 2 << "\n" << "1 1" << "\n" << "2 " << n << "\n";
			else {
				st.clear();

				int pt = 0;

				for ( int i = 0; i < n; i++ ) {
					if ( v[i] < mex ) st.insert( v[i] );

					if ( st.size() == mex ) {
						pt = i+1;
						break;
					}
				}

				if ( pt == n || st.size() < mex ) cout << -1 << "\n";
				else {
					st.clear();

					int f = 0;

					for ( int i = pt; i < n; i++ ) {
						if ( v[i] < mex ) st.insert( v[i] );

						if ( st.size() == mex ) {
							f = 1;
							break;
						}
					}

					if ( !f ) cout << -1 << "\n";
					else cout << 2 << "\n" << "1 " << pt << "\n" << pt+1 << " " << n << "\n";
				}
			}
		}
	}

	return 0;
}
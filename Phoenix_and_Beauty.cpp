#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, k, mx = 0;
		cin >> n >> k;
		int a[n];

		map<int, int> mp;

		for ( int i = 0; i < n; i++ ) {
			cin >> a[i];
			mp[a[i]]++;
			mx = max( mx, mp[a[i]] );
		}

		if ( k == n || mp.size() == 1 ) {
			cout << n << "\n";
			for ( int i = 0; i < n; i++ ) cout << a[i] << " ";
			cout << "\n";
		}
		else if ( k < (int)mp.size() ) cout << -1 << "\n";
		else {
			vector<int> v, nv;
			set<int> st;

			for ( int i = 0; i < n; i++ ) {
				if ( st.find( a[i] ) == st.end() ) {
					v.push_back( a[i] );
					st.insert( a[i] );
				}
			}

			for ( int i = 1; i <= n; i++ ) {
				if ( st.size() == k ) break;
				if ( st.find( i ) == st.end() ) {
					v.push_back( i );
					st.insert( i );
				}
			}

			mx = max( mx, k );
			int cnt = 0;

			while ( cnt < n ) {
				for ( auto u : v ) nv.push_back( u );
				cnt++;
			}
			
			cout << nv.size() << "\n";
			for ( auto u : nv ) cout << u << " ";
			cout << "\n";
		}
	}

	return 0;
}
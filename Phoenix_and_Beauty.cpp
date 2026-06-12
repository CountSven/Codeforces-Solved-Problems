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
		cin >> n >> k;

		set<int> st;

		for ( int i = 0; i < n; i++ ) {
			int x;
			cin >> x;
			st.insert( x );
		}

		if ( st.size() > k ) cout << -1 << "\n";
		else {
			vector<int> v;

			for ( auto u : st ) v.push_back( u );
			while ( v.size() < k ) v.push_back( 1 );

			cout << n * k << "\n";
			for ( int i = 0; i < n; i++ ) {
				for ( auto u : v ) cout << u << " ";
			}
			cout << "\n";
		}
	}

	return 0;
}
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

		if ( k == n - 1 && n == 4 ) cout << -1 << "\n";
		else {
			set<int> st;

			for ( int i = 0; i < n; i++ ) st.insert( i );

			if ( k == n - 1 ) {
				cout << n - 1 << " " << n - 2 << "\n";
				cout << n - 3 << " " << 1 << "\n";

				st.erase( n - 1 );
				st.erase( n - 2 );
				st.erase( n - 3 );
				st.erase( 1 );
			}
			else {
				cout << k << " " << n - 1 << "\n";
				
				st.erase( k );
				st.erase( n - 1 );
			}

			for ( int i = 0; i < n / 2; i++ ) {
				if ( st.count( i ) && st.count( n - i - 1 ) ) {
					cout << i << " " << n - i - 1 << "\n";
					st.erase( i );
					st.erase( n - i - 1 );
				}
			}

			if ( st.size() ) {
				for ( auto u : st ) cout << u << " ";
				cout << "\n"; 
			}
		}
	} 

	return 0;
}
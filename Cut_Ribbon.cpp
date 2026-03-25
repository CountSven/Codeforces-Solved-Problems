#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, a, b, c;
	cin >> n >> a >> b >> c;

	set<int> st;

	st.insert( a );
	st.insert( b );
	st.insert( c );

	if ( *st.begin() == 1 || st.size() == 1 ) cout << n / ( *st.begin() ) << "\n";
	else {
		if ( st.size() == 2 ) {
			a = 0, b = 0;

			for ( auto u : st ) {
				if ( !a ) a = u;
				else if ( !b ) b = u;
			}

			int mx = 0;

			for ( int i = 0; i <= 2000; i++ ) {
				if ( i * a > n ) break;
				int cur = n - ( i * a );
				if ( cur >= 0 && cur % b == 0 ) {
					mx = max( mx, i + ( cur / b ) );
				}
			}

			cout << mx << "\n";
		}
		else {
			a = 0, b = 0, c = 0;

			for ( auto u : st ) {
				if ( !a ) a = u;
				else if ( !b ) b = u;
				else if ( !c ) c = u;
			}

			int mx = 0;

			for ( int i = 0; i <= 2000; i++ ) {
				if ( i * a > n ) break;
				for ( int j = 0; j <= 1500; j++ ) {
					if ( j * b > n ) break;
					int cur = n - ( ( i * a ) + ( j * b ) );
					if ( cur >= 0 && cur % c == 0 ) {
						mx = max( mx, i + j + ( cur / c ) );
					}
				}
			}

			cout << mx << "\n";
		}
	}

	return 0;
}
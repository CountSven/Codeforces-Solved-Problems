#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, f = 0;
		cin >> n;
		int a[n];

		set<int> st;

		for ( int i = 0, x; i < n; i++ ) {
			cin >> x;
			if ( x % 10 == 0 || x % 10 == 5 ) {
				f = 1;
				if ( x % 10 == 5 ) x += 5;
			}
			else {
				while ( x % 10 != 6 ) x += ( x % 10 );
			}
			st.insert( x );
			a[i] = x;
		}

		// for ( auto u : a ) cout << u << " ";
		// cout << "\n"; 

		if ( f ) {
			if ( st.size() == 1 ) cout << "Yes" << "\n";
			else cout << "No" << "\n";
		}
		else {
			sort( a, a+n );

			for ( int i = 1; i < n; i++ ) {
				if ( ( a[i] - a[0] ) % 20 ) {
					f = 1;
					break;
				}
			}

			if ( !f ) cout << "Yes" << "\n";
			else cout << "No" << "\n";
		}
	}  

	return 0;
}
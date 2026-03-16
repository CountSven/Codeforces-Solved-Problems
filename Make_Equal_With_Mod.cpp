#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, p0 = 0, p1 = 0;
		cin >> n;
		int a[n];

		set<int> st;

		for ( int i = 0; i < n; i++ ) {
			cin >> a[i];
			if ( !a[i] ) p0 = 1;
			else if ( a[i] == 1 ) p1 = 1; 
			st.insert( a[i] );
		}

		if ( !p0 && !p1 ) cout << "YES" << "\n";
		else if ( p0 && p1 ) cout << "NO" << "\n";
		else if ( p0 ) cout << "YES" << "\n";
		else {
			sort( a, a+n );

			int f = 0;

			for ( int i = 1; i < n; i++ ) {
				if ( a[i] != a[i-1] && a[i] - a[i-1] == 1 ) {
					f = 1;
					break;
				}
			}

			if ( st.size() == 1 ) cout << "YES" << "\n";
			else if ( !f ) cout << "YES" << "\n";
			else cout << "NO" << "\n";
		}
	}

	return 0;
}
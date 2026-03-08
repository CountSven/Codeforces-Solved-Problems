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
		int a[n+1];

		for ( int i = 1; i <= n; i++ ) cin >> a[i];

		set<int> st;

		for ( int i = 2; i <= n; i++ ) st.insert( a[i] - a[i-1] );

		if ( st.size() > 1 ) cout << "NO" << "\n";
		else {
			int diff = *st.begin();

			for ( int i = 1; i <= n; i++ ) {
				if ( diff > 0 ) a[i] -= ( diff * i );
				else a[i] -= ( abs(diff) * ( n - i + 1 ) );
			}

			int f = 0;

			for ( int i = 1; i <= n; i++ ) {
				if ( a[i] < 0 || a[i] % ( n + 1 ) != 0 ) {
					f = 1;
					break;
				}
			}

			if ( !f ) cout << "YES" << "\n";
			else cout << "NO" << "\n";
		}
	}

	return 0;
}
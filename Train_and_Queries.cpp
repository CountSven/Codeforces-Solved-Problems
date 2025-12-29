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
		vector<int> u(n+1);

		map<int, int> st, en;

		for ( int i = 1; i <= n; i++ ) {
			cin >> u[i];
			if ( st.find( u[i] ) == st.end() ) st[u[i]] = i;
			en[u[i]] = i;
		}

		// for ( auto u : st ) cout << u.first << " " << u.second << "\n";
		// cout << "\n";
		// for ( auto u : en ) cout << u.first << " " << u.second << "\n";
		// cout << "\n";

		while ( k-- ) {
			int a, b;
			cin >> a >> b;

			if ( st.find( a ) == st.end() || st.find( b ) == st.end() ) cout << "NO" << "\n";
			else if ( st[a] < en[b] ) cout << "YES" << "\n";
			else cout << "NO" << "\n";
		}
	}

	return 0;
}
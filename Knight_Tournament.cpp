#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	set<int> st;

	for ( int i = 1; i <= n; i++ ) st.insert( i );
	
	vector<int> res( n+1, 0 );

	while ( m-- ) {
		int l, r, x;
		cin >> l >> r >> x;

		st.erase( x );

		while ( 1 ) {
			auto it = st.lower_bound( l );
			if ( it == st.end() || *it > r ) break;
			res[*it] = x;
			st.erase( it );
		}

		st.insert( x );
	}

	for ( int i = 1; i <= n; i++ ) cout << res[i] << " \n"[i == n];

	return 0;
}
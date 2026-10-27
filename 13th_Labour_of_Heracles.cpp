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
		int w[n];

		for ( int i = 0; i < n; i++ ) cin >> w[i];

		vector<int> deg(n);
		
		for ( int i = 0, u, v; i < n-1; i++ ) {
			cin >> u >> v;
			u--, v--;
			deg[u]++;
			deg[v]++;
		}

		long long sum = accumulate( w, w+n, 0LL );

		multiset<pair<int, int>> st;

		for ( int i = 0; i < n; i++ ) {
			deg[i]--;
			if ( deg[i] ) st.insert( { w[i], deg[i] } );
		}

		cout << sum << " ";

		while ( st.size() ) {
			auto [val, cur] = *st.rbegin();
			st.erase( st.find( *st.rbegin() ) );
			sum += val;
			cur--;
			cout << sum << " ";
			if ( cur ) st.insert( { val, cur } );		
		}
		cout << "\n";
	}

	return 0;
}
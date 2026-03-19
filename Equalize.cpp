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

		set<int> st;

		for ( int i = 0; i < n; i++ ) {
			int x;
			cin >> x;
			st.insert( x );
		}

		vector<int> v;

		for ( auto u : st ) v.push_back( u );

		// for ( auto u : v ) cout << u << " ";
		// cout << "\n";

		int res = 1;

		for ( int i = 0; i < (int)v.size(); i++ ) {
			int cur = upper_bound( v.begin(), v.end(), v[i] + n - 1 ) - v.begin();
			cur -= i;
			res = max( res, cur );
		}

		cout << res << "\n";
	}

	return 0;
}
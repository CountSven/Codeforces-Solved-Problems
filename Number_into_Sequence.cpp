#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<int> v(1e6+5, 0);

	for ( int i = 1; i <= 1000000; i++ ) {
		for ( int j = i; j <= 1000000; j += i ) v[j]++;
	}

	set<int> st;

	for ( int i = 1; i <= 1000000; i++ ) {
		if ( v[i] == 2 ) st.insert( i ); 
	}

	// cout << st.size() << "\n";
	// for ( auto u : st ) cout << u << " ";
	// cout << "\n";

	int t;
	cin >> t;

	while ( t-- ) {
		long long n;
		cin >> n;

		vector<pair<int, long long>> v;

		for ( long long i = 2; i * i <= n; i++ ) {
			if ( n % i == 0 ) {
				int cnt = 0;
				while ( n % i == 0 ) {
					cnt++;
					n /= i;
				}
				v.push_back( { cnt, i } );
			}
		}

		if ( n > 1 ) v.push_back( { 1, n } );

		sort( v.rbegin(), v.rend() );

		vector<long long> res( v[0].first, v[0].second );

		for ( int i = 1; i < v.size(); i++ ) {
			for ( int j = 0; j < v[i].first; j++ ) res.back() *= v[i].second;
		}

		cout << res.size() << "\n";
		for ( auto u : res ) cout << u << " ";
		cout << "\n";
	}

	return 0;
}
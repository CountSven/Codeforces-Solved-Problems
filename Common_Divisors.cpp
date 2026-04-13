#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	set<long long> st, divs;

	for ( int i = 0; i < n; i++ ) {
		long long x;
		cin >> x;
		st.insert( x );
	}

	vector<long long> v;

	for ( auto u : st ) v.push_back( u );

	for ( long long i = 1; i * i <= v[0]; i++ ) {
		if ( v[0] % i == 0 ) divs.insert( i );
	}

	// for ( auto u : divs ) cout << u << " ";
	// cout << "\n";

	long long cnt = 0;

	for ( auto u : divs ) {
		int f1 = 1, f2 = 1;
		if ( u == ( v[0] / u ) ) f2 = 0;
		for ( auto x : v ) {
			if ( x % u ) f1 = 0;
			if ( x % ( v[0] / u ) ) f2 = 0;
			if ( !f1 && !f2 ) break;
		}
		if ( f1 && f2 ) cnt += 2;
		else if ( f1 || f2 ) cnt++;
	}

	cout << cnt << "\n";

	return 0;
}
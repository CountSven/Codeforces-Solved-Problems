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
		int a[n];
		vector<int> v;

		for ( int i = 0; i < n; i++ ) {
			cin >> a[i];
			if ( v.empty() || a[i] != v.back() ) v.push_back( a[i] );
		}

		// for ( auto u : v ) cout << u << " ";
		// cout << "\n";

		int cnt = 0;
		int sz = v.size();

		for ( int i = 0; i < sz; i++ ) {
			if ( i == 0 && sz > 1 && v[i+1] > v[i] ) cnt++;
			else if ( i == ( sz - 1 ) && sz > 1 && v[i-1] > v[i] ) cnt++;
			else if ( i != 0 && i != ( sz - 1 ) && v[i] < v[i-1] && v[i] < v[i+1] ) cnt++;
		}

		if ( cnt == 1 || sz == 1 ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;
}
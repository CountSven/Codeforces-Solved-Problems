#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;
	cin >> n;
	vector<long long> v(n);

	for ( int i = 0; i < n; i++ ) {
		cin >> v[i];

		if ( i > 0 ) v[i] += v[i-1];
	}

	// for ( auto u : v ) cout << u << " ";
	// cout << "\n";

	int m;
	cin >> m;

	while ( m-- ) {
		int q;
		cin >> q;
		cout << ( lower_bound( v.begin(), v.end(), q ) - v.begin() ) + 1 << "\n";
	} 

	return 0;
}
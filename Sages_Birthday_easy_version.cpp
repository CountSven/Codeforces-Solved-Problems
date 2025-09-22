#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	vector<int> v(n), v1, v2, r;

	for ( int i = 0; i < n; i++ ) cin >> v[i];

	sort( v.begin(), v.end() );

	for ( int i = 0; i < n/2; i++ ) v2.push_back( v[i] );
	for ( int i = n/2; i < n; i++ ) v1.push_back( v[i] );

	reverse( v1.begin(), v1.end() );
	reverse( v2.begin(), v2.end() );

	// for ( auto u : v1 ) cout << u << " ";
	// cout << "\n";
	// for ( auto u : v2 ) cout << u << " ";
	// cout << "\n";

	for ( int i = 1; i <= n; i++ ) {
		if ( i % 2 ) {
			r.push_back( v1.back() );
			v1.pop_back();
		}
		else {
			r.push_back( v2.back() );
			v2.pop_back();
		}
	}

	int cnt = 0;

	for ( int i = 0; i < r.size(); i++ ) {
		if ( i != 0 && i != r.size() - 1 && r[i] < r[i-1] && r[i] < r[i+1] ) cnt++;
	}

	cout << cnt << "\n";
	for ( auto u : r ) cout << u << " ";
	cout << "\n";

	return 0;
}
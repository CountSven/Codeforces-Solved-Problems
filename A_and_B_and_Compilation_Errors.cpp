#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	vector<int> v(n), v1(n-1), v2(n-2);

	for ( int i = 0; i < n; i++ ) cin >> v[i];

	sort( v.begin(), v.end() );

	for ( int i = 0; i < n-1; i++ ) cin >> v1[i];

	sort( v1.begin(), v1.end() );
	v1.push_back( 0 );

	for ( int i = 0; i < n; i++ ) {
		if ( v[i] != v1[i] ) {
			cout << v[i] << "\n";
			break;
		}
	}

	v1.pop_back();

	for ( int i = 0; i < n-2; i++ ) cin >> v2[i];

	sort( v2.begin(), v2.end() );
	v2.push_back( 0 );

	for ( int i = 0; i < n-1; i++ ) {
		if ( v1[i] != v2[i] ) {
			cout << v1[i] << "\n";
			break;
		}
	}

	// for ( auto u : v ) cout << u << " ";
	// cout << "\n";
	// for ( auto u : v1 ) cout << u << " ";
	// cout << "\n";
	// for ( auto u : v2 ) cout << u << " ";
	// cout << "\n";

	return 0;
}
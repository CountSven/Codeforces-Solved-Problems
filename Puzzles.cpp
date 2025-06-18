#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;
	vector<int> v(m);

	for ( int i = 0; i < m; i++ ) cin >> v[i];

	sort( v.begin(), v.end() );

	// for ( auto u : v ) cout << u << " ";
	// cout << "\n";

	int diff = 10000;

	for ( int i = 0; i < m-n+1; i++ ) diff = min( diff, v[i+n-1] - v[i] );

	cout << diff << "\n";

	return 0;
}
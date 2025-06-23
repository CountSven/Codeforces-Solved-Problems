#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	vector<int> v(n+2);

	v[0] = 0;

	for ( int i = 1; i <= n; i++ ) cin >> v[i];

	v[n+1] = 0;

	int m;
	cin >> m;

	while ( m-- ) {
		int x, y;
		cin >> x >> y;

		v[x-1] += ( y - 1 );
		v[x+1] += ( v[x] - y );
		v[x] = 0;
	}

	v.erase( v.begin() );
	v.pop_back();

	for ( auto u : v ) cout << u << "\n";

	return 0;
}
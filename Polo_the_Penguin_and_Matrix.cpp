#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m, d;
	cin >> n >> m >> d;

	vector<int> v;

	for ( int i = 0; i < n; i++ ) {
		for ( int j = 0, x; j < m; j++ ) {
			cin >> x;
			v.push_back( x );
		}
	}

	sort( v.begin(), v.end() );

	int val = v[( n * m ) / 2], cnt = 0;

	for ( auto u : v ) {
		int need = abs( val - u );
		if ( need % d ) {
			cnt = -1;
			break;
		}
		else cnt += ( need / d );
	}

	cout << cnt << "\n";

	return 0;
}
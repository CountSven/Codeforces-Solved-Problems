#include<bits/stdc++.h>
using namespace std;

long long n, res = 0;

map<pair<int, int>, int> mp;

void dfs( int i, int j, char c, int step )
{
	if ( step == n ) {
		if ( !mp[{i, j}] ) {
			res++;
			mp[{i, j}] = 1;
		}
		return;		
	}

	if ( c == 'W' || c == 'D' ) {
		dfs( i, j+1, 'R', step+1 );
		dfs( i, j-1, 'L', step+1 );
	}
	else {
		dfs( i+1, j, 'W', step+1 );
		dfs( i-1, j, 'D', step+1 );
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	// for ( int i = -500; i <= 500; i++ ) {
	// 	for ( int j = -500; j <= 500; j++ ) mp[{i, j}] = 0;
	// }

	cin >> n;

	// dfs( 1, 0, 'W', 1 );
	// dfs( -1, 0, 'D', 1 );
	// dfs( 0, 1, 'R', 1 );
	// dfs( 0, -1, 'L', 1 );

	// for ( auto [x, y] : mp ) {
	// 	if ( y ) cout << x.first << " " << x.second << "\n";
	// }

	// if ( n % 2 ) res *= 2;

	// cout << res << "\n";
	
	vector<long long> v(1001);

	v[1] = 4;

	long long init = 2;

	for ( int i = 2; i <= 1000; i++ ) {
		if ( i % 2 ) {
			v[i] = v[i-2] + ( 4 * init );
			init++;
		}
		else v[i] = init * init;
	}

	// for ( int i = 1; i <= 15; i++ ) cout << v[i] << " ";
	// cout << "\n";

	cout << v[n] << "\n";

	return 0;
}
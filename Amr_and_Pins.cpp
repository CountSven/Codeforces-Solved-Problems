#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	long long r, x, y, xx, yy, d1, d2, dist;
	cin >> r >> x >> y >> xx >> yy;

	d1 = ( x - xx ) * ( x - xx );
	d2 = ( y - yy ) * ( y - yy );

	dist = ceil( sqrt( d1 + d2 ) );

	dist = ( dist + ( 2LL * r ) - 1 ) / ( 2LL * r );

	cout << dist << "\n";

	return 0;
}
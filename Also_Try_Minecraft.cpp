#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;
	vector<int> v(n);

	for ( int i = 0; i < n; i++ ) cin >> v[i];

	vector<long long> prefSum(n), sufSum(n);

	for ( int i = 1; i < n; i++ ) prefSum[i] = prefSum[i-1] + max( 0, v[i-1] - v[i] );

	for ( int i = n-2; i >= 0; i-- ) sufSum[i] = sufSum[i+1] + max( 0, v[i+1] - v[i] );

	while ( m-- ) {
		int x, y;
		cin >> x >> y;

		x--;
		y--;

		if ( x < y ) cout << prefSum[y] - prefSum[x] << "\n";
		else cout << sufSum[y] - sufSum[x] << "\n";
	}	

	return 0;
}
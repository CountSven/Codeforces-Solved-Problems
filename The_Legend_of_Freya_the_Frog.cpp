#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		long long x, y, k;
		cin >> x >> y >> k;

		long long axX = ceil( (1.0) * x / k );
		long long axY = ceil( (1.0) * y / k );

		long long res;

		if ( axX > axY ) res = ( ceil( (1.0) * x / k ) * 2 ) - 1;
		else res = ceil( (1.0) * y / k ) * 2;

		cout << res << "\n";
	}

	return 0;
}
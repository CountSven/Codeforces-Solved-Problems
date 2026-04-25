#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, d;
	cin >> n >> d;
	int a[n];

	for ( int i = 0; i < n; i++ ) cin >> a[i];

	long long res = 0;

	for ( int i = 0; i < n; i++ ) {
		int rng = upper_bound( a, a+n, a[i] + d ) - a;
		rng -= i;
		// cout << rng << " ";

		if ( rng >= 3 ) {
			rng--;
			res += ( 1LL * rng * ( rng - 1 ) ) / 2;
		}
		// cout << res << "\n";
	}

	cout << res << "\n";

	return 0;
}
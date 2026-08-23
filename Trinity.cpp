#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n;
		cin >> n;
		int a[n];

		for ( int i = 0; i < n; i++ ) cin >> a[i];

		sort( a, a+n );

		int rng = 0;

		for ( int i = 0; i+1 < n; i++ ) {
			int val = a[i] + a[i+1];
			int cur = lower_bound( a, a+n, val ) - a;
			rng = max( rng, cur - i );
		}

		cout << n - rng << "\n";
	}

	return 0;
}
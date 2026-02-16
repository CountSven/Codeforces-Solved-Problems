#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		long long n, x;
		cin >> n >> x;
		long long a[n+1];

		for ( int i = 1; i <= n; i++ ) cin >> a[i];

		sort( a+1, a+1+n );

		long long sum = 0, res = 0;

		for ( int i = 1; i <= n; i++ ) {
			sum += a[i];

			if ( sum > x ) break;
			else res += ( ( x - sum ) / i ) + 1;
		}

		cout << res << "\n";
	}

	return 0;
}
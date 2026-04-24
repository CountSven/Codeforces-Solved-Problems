#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		long long n, k;
		cin >> n >> k;
		long long a[n];

		for ( int i = 0; i < n; i++ ) cin >> a[i];

		long long sum = 0, add = 0;

		for ( int i = 0; i+1 < n; i++ )	{
			sum += a[i];
			long long cur = a[i+1] * 100LL;
			if ( cur > ( k * sum ) ) {
				long long l = 1, r = 1e18, need = 1e18;

				while ( l <= r ) {
					unsigned long long mid = l + ( r - l ) / 2;
					unsigned long long tot = 1LL * k * ( sum + mid );

					if ( cur <= tot ) {
						need = mid;
						r = mid-1;
					}
					else l = mid+1;
				}

				sum += need;
				add += need;
			}
		}

		cout << add << "\n";
	}

	return 0;
}
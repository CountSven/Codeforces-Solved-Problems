#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, m, k;
		cin >> n >> m >> k;

		long long l = 1, r = m;

		while ( l < r ) {
			long long mid = ( l + r ) / 2;
			long long cur = m - ( m / ( mid + 1 ) );

			if ( cur * n >= k ) r = mid;
			else l = mid + 1;
		}

		cout << l << "\n";
	}

	return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		long long k;
		cin >> k;

		long long low = 1, high = 2e18, res = 2e18;

		while ( low <= high ) {
			long long mid = ( low + high ) / 2;

			long long srVal = sqrtl( mid ) + 5;

			while ( srVal * srVal > mid ) srVal--;

			if ( mid - srVal >= k ) {
				res = mid;
				high = mid - 1;
			}
			else low = mid + 1;
		}

		cout << res << "\n";
	}

	return 0;
}
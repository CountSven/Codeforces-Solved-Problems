#include<bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		ll n;
		cin >> n;

		ll l = 1, r = 1e11, val = 1e11;

		while ( l <= r ) {
			ll mid = l + ( r - l ) / 2;
			ll cur = ( mid * ( mid - 1 ) ) / 2;
			// cout << l << " " << r << " " << mid << "\n";

			if ( cur > n ) r = mid - 1;
			else {
				val = mid;
				l = mid + 1;
			}
		}

		ll ext = n - ( val * ( val - 1 ) / 2 );	

		cout << val + ext << "\n";
	}

	return 0;
}
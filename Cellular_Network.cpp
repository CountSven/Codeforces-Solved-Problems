#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;
	ll a[n], b[m];

	for ( int i = 0; i < n; i++ ) cin >> a[i];
	for ( int i = 0; i < m; i++ ) cin >> b[i];

	ll l = 0, r = 2e12, res = 2e12;
	
	while ( l <= r ) {
		ll mid = l + ( r - l ) / 2;

		int i = 0, j = 0;

		while ( i < n && j < m ) {
			if ( b[j] - mid <= a[i] && a[i] <= b[j] + mid ) i++;
			else j++;
		}

		if ( j < m ) {
			res = mid;
			r = mid - 1;
		}
		else l = mid + 1;
	}

	cout << res << "\n";

	return 0;
}
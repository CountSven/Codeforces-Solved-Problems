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

		int dis = n / k;

		if ( dis >= m ) cout << m << "\n";
		else if ( m == 0 ) cout << 0 << "\n";
		else {
			m -= dis;
			k--;

			int cur = m / k;

			if ( m % k ) cur++;

			cout << dis - cur << "\n";
		}
	}

	return 0;
}
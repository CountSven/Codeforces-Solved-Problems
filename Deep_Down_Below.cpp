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
		vector<pair<int, int>> v(n);

		for ( int i = 0; i < n; i++ ) {
			int k;
			cin >> k;
			vector<int> a(k);

			int mx = 0;

			for ( int i = 0; i < k; i++ ) {
				cin >> a[i];
				mx = max( mx, a[i] - i + 1 );
			}

			v[i] = { mx, k };
		}

		sort( v.begin(), v.end() );

		long long l = 1, r = 2e14, res = 2e14;

		while ( l <= r ) {
			long long mid = l + ( r - l ) / 2;
			long long cur = mid, f = 0;

			for ( int i = 0; i < n; i++ ) {
				if ( cur >= v[i].first ) cur += v[i].second;
				else {
					f = 1;
					break;
				}
			}

			if ( !f ) {
				res = mid;
				r = mid - 1;
			}
			else l = mid + 1;
		}

		cout << res << "\n";
	}

	return 0;
}
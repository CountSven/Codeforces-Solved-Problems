#include<bits/stdc++.h>
using namespace std;

const int mx = 543;
int a[mx][mx];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n;
		cin >> n;

		map<long long, long long> mp;
		long long cnt = 0;

		for ( int i = 1; i <= n; i++ ) {
			for ( int j = 1; j <= n; j++ ) {
				cin >> a[i][j];
				long long cur = a[i][j] + mp[i - j];
				if ( cur < 0 ) {
					mp[i - j] -= cur;
					cnt += (-cur);
				}
			}
		}

		cout << cnt << "\n";
	}

	return 0;
}
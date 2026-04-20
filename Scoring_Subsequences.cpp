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
		int a[n+1];

		for ( int i = 1; i <= n; i++ ) cin >> a[i];

		for ( int i = 1; i <= n; i++ ) {
			int l = 1, r = i, cur = 1;

			while ( l <= r ) {
				int m = ( l + r ) / 2;

				if ( a[i - m + 1] >= m ) {
					cur = m;
					l = m + 1;
				}
				else r = m - 1;
			}

			cout << cur << " ";
		}
		cout << "\n";
	}

	return 0;
}
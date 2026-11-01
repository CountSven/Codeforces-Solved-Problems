#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, k;
		cin >> n >> k;

		int cur = 0;

		for ( int i = 1; i <= n; i++ ) {
			if ( cur == k ) cout << -1000 << " ";
			else if ( cur + i <= k ) {
				cur += i;
				cout << 2 << " ";
			}
			else {
				int need = k - cur;
				int tot = ( i - 1 ) * -2 - 1;
				tot += need * 2;
				cout << tot << " ";
				cur = k;
			}
		}
		cout << "\n";
	}

	return 0;
}
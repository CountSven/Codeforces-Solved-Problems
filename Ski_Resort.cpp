#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, k, q;
		cin >> n >> k >> q;
		int a[n];

		long long cnt = 0, cur = 0;

		for ( int i = 0; i < n; i++ ) {
			cin >> a[i];
			if ( a[i] <= q ) cnt++;
			else cnt = 0;

			if ( cnt >= k ) cur += ( cnt - k + 1 );
		}

		cout << cur << "\n";
	}

	return 0;
}
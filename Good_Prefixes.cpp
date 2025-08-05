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
		int a[n];

		int mx = 0;
		long long sum = 0, cnt = 0;

		for ( int i = 0; i < n; i++ ) {
			cin >> a[i];
			sum += a[i];
			mx = max( mx, a[i] );

			if ( ( sum - mx ) == mx ) cnt++;
		}

		cout << cnt << "\n";
	}

	return 0;
}
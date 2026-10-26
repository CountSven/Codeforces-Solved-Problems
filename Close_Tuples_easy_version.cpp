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

		for ( int i = 0; i < n; i++ ) cin >> a[i];

		sort( a, a+n );

		long long cnt = 0;

		for ( int i = 0; i+2 < n; i++ ) {
			int idx = upper_bound( a, a+n, a[i] + 2 ) - a;
			idx--;
			int len = idx - i + 1;
			len--;
			long long tot = ( 1LL * len * ( len - 1 ) ) / 2;
			cnt += tot;
		}

		cout << cnt << "\n";
	}

	return 0;
}
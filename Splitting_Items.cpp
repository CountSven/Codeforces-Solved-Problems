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
		int a[n];

		for ( int i = 0; i < n; i++ ) cin >> a[i];

		sort( a, a+n );
		reverse( a, a+n );

		for ( int i = 1; i < n; i += 2 ) {
			int cur = min( a[i] + k, a[i-1] );
			int cut = cur - a[i];
			a[i] = cur;
			k -= cut;
		}

		long long al = 0, bo = 0, res;

		for ( int i = 0; i < n; i += 2 ) al += a[i];
		for ( int i = 1; i < n; i += 2 ) bo += a[i];

		res = al - bo;

		cout << res << "\n";
	}

	return 0;
}
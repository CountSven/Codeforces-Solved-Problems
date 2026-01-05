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

		long long sum = 0, cur = 0, res = 1;

		for ( int i = 0; i < n; i++ ) {
			cin >> a[i];
			sum += a[i];
		}

		for ( int i = 0; i+1 < n; i++ ) {
			cur += a[i];
			sum -= a[i];

			res = max( res, __gcd( cur, sum ) );
		}

		cout << res << "\n";
	}

	return 0;
}
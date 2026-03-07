#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, l, r, cnt = 0, j = 0;
		cin >> n >> l >> r;
		int a[n];

		for ( int i = 0; i < n; i++ ) cin >> a[i];

		long long sum = 0;

		for ( int i = 0; i < n; i++ ) {
			sum += a[i];

			while ( sum > r && j < i ) sum -= a[j++];

			if ( sum > r ) {
				sum = 0;
				j = i + 1;
			}

			if ( sum >= l && sum <= r ) {
				cnt++;
				sum = 0;
				j = i + 1;
			}
		}

		cout << cnt << "\n";
	}

	return 0;
}
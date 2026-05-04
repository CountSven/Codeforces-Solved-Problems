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

		long long sum = 0, mn = a[0], mnPos = 0;

		for ( int i = 0; i < n; i++ ) {
			sum += a[i];
			if ( sum < mn ) {
				mn = sum;
				mnPos = i;
			}
		}

		sum = 0;

		for ( int i = 0; i < n; i++ ) {
			sum += a[i];
			if ( i == mnPos ) sum = abs( sum );
		}

		cout << sum << "\n";
	}

	return 0;
}
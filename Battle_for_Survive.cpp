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

		long long sum = 0;

		for ( int i = 1; i <= n; i++ ) {
			cin >> a[i];
			if ( i != n-1 ) sum += a[i];
			else sum -= a[i];
		}

		cout << sum << "\n";
	}

	return 0;
}
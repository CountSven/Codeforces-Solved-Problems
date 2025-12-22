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

		int res = 0;

		for ( int i = 0; i < n/2; i++ ) res = __gcd( res, abs( a[i] - a[n-1-i] ) );

		cout << res << "\n";
	}

	return 0;
}
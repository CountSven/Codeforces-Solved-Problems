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
		int a[n + 1];

		for ( int i = 1; i <= n; i++ ) cin >> a[i];

		for ( int i = 2; i <= ( n / 2 ); i++ ) {
			if ( a[i] == a[i - 1] || a[n - i + 1] == a[n - i + 2] ) swap( a[i], a[n - i  + 1] );
		}

		int res = 0;

		for ( int i = 2; i <= n; i++ ) {
			if ( a[i] == a[i - 1] ) res++;
		}

		cout << res << "\n";
	} 

	return 0;
}
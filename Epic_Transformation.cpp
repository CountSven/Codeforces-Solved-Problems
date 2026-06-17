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
		int a[n+1];

		for ( int i = 1; i <= n; i++ ) cin >> a[i];

		sort( a+1, a+n+1 );

		int mid = ( n + 1 ) / 2, cnt = 0;

		for ( int i = 1, j = i + mid; j <= n; i++, j++ ) {
			if ( a[i] != a[j] ) cnt += 2;
		}

		cout << n - cnt << "\n";
	}

	return 0;
}
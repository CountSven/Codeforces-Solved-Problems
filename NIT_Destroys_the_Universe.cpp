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
		a[0] = 0;

		for ( int i = 1; i <= n; i++ ) cin >> a[i];

		int cnt = 0;

		for ( int i = 1; i <= n; i++ ) {
			if ( a[i] && !(a[i-1]) ) cnt++;
		}

		cnt = min( 2, cnt );

		cout << cnt << "\n";
	}

	return 0;
}
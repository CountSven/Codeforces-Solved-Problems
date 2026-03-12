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

		int cnt = 1, res = n;

		for ( int i = 1; i < n; i++ ) {
			if ( a[i] == a[0] ) cnt++;
			else {
				if ( cnt ) res = min( res, cnt );
				cnt = 0;
			}
		}

		if ( cnt ) res = min( res, cnt );

		if ( res == n ) cout << -1 << "\n";
		else cout << res << "\n";
	}

	return 0;
}
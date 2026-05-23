#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, mn = 1e9, mnPos = 2e5;
		cin >> n;
		int a[n];

		for ( int i = 0; i < n; i++ ) {
			cin >> a[i];
			mn = min( mn, a[i] );
		}

		for ( int i = 0; i < n; i++ ) {
			if ( a[i] == mn ) {
				mnPos = i;
				break;
			}
		}

		if ( !is_sorted( a+mnPos, a+n ) ) cout << -1 << "\n";
		else cout << mnPos << "\n";
	}

	return 0;
}
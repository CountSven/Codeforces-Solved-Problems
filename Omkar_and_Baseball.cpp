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

		int l = 0, r = 0, in = 0;

		for ( int i = 1; i <= n; i++ ) {
			cin >> a[i];
			if ( a[i] != i ) {
				if ( l ) r = i;
				else l = i;
			}
		}

		for ( int i = 1; i <= n; i++ ) {
			if ( a[i] == i && l <= i && i <= r ) {
				in = 1;
				break;
			}
		}

		if ( !l ) cout << 0 << "\n";
		else {
			if ( !in ) cout << 1 << "\n";
			else cout << 2 << "\n";
		}
	}

	return 0;
}
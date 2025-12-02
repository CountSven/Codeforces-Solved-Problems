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

		int f = 0;

		for ( int i = 0; i+2 < n; i++ ) {
			for ( int j = i+2; j < n; j++ ) {
				if ( a[i] == a[j] ) {
					f = 1;
					break;
				}
			}
		}

		if ( f ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;
}
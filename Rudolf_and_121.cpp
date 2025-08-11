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

		bool isPos = true;	

		for ( int i = 0; i < n-2; i++ ) {
			if ( a[i] < 0 ) {
				isPos = false;
				break;
			}

			a[i+2] -= a[i];
			a[i+1] -= a[i] * 2;
			a[i] = 0;
		}

		for ( int i = 0; i < n; i++ ) {
			if ( a[i] != 0 ) isPos = false;
		}

		if ( isPos ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;
}
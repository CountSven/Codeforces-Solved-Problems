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

		int mn = 1e9, mx = 0, tmp = n;

		string s;

		while ( tmp-- ) s += '0';

		for ( int i = 0; i < n; i++ ) {
			cin >> a[i];
			mn = min( mn, a[i] );

			if ( a[i] == mn ) s[i] = '1';
		}

		for ( int i = n-1; i >= 0; i-- ) {
			mx = max( mx, a[i] );

			if ( a[i] == mx ) s[i] = '1';
		}

		cout << s << "\n";
	}

	return 0;
}
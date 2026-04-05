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
		int a[n], b[n];

		int zer = 0, on = 0;

		for ( int i = 0; i < n; i++ ) cin >> a[i];
		for ( int i = 0; i < n; i++ ) {
			cin >> b[i];
			if ( !b[i] ) zer = 1;
			else on = 1;
		}

		if ( zer && on ) cout << "Yes" << "\n";
		else if ( is_sorted( a, a+n ) ) cout << "Yes" << "\n";
		else cout << "No" << "\n"; 
	}

	return 0;
}
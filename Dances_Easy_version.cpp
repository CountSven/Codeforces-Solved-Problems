#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, m;
		cin >> n >> m;
		int a[n], b[n];

		a[0] = m;

		for ( int i = 1; i < n; i++ ) cin >> a[i];
		for ( int i = 0; i < n; i++ ) cin >> b[i];
		
		sort( a, a+n );
		sort( b, b+n );

		int i = 0, j = 0;

		while ( i < n && j < n ) {
			while ( j < n && b[j] <= a[i] ) j++;
			if ( j == n ) break;
			else i++, j++;
		}

		cout << n - i << "\n";
	} 

	return 0;
}
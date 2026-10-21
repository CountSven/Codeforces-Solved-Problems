#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, x;
		cin >> n >> x;
		int a[n];

		int f = 0;

		for ( int i = 0; i < n; i++ ) {
			cin >> a[i];
			if ( a[i] == x ) f = 1;
		}

		sort( a, a+n );

		int sum = accumulate( a, a+n, 0 );

		if ( a[0] == a[n-1] && a[0] == x ) cout << 0 << "\n";
		else if ( n * x == sum || f ) cout << 1 << "\n";
		else cout << 2 << "\n";	
	} 

	return 0;
}
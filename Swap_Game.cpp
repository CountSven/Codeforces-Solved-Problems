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

		int mn = 1e9;

		for ( int i = 0; i < n; i++ ) {
			cin >> a[i];
			if ( i ) mn = min( mn, a[i] );
		}

		if ( mn < a[0] ) cout << "Alice" << "\n";
		else cout << "Bob" << "\n";	
	}

	return 0;
}
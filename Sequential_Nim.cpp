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

		int f = 0, w = 0;

		for ( int i = 1; i <= n; i++ ) {
			cin >> a[i];
			if ( a[i] > 1 && !f ) {
				f = 1;
				if ( i % 2 ) w = 1;
				else w = 2;
			}
		}

		if ( f ) {
			if ( w == 1 ) cout << "First" << "\n";
			else cout << "Second" << "\n";
		}
		else {
			if ( n % 2 ) cout << "First" << "\n";
			else cout << "Second" << "\n";
		}
	}

	return 0;
}
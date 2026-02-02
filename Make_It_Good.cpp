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

		if ( n < 3 ) cout << 0 << "\n";
		else {
			reverse( a, a+n );

			int gtr = 0, slr = 0, ptr = 1;

			for ( int i = 1; i < n; i++ ) {
				if ( a[i] > a[i-1] && slr ) {
					ptr = i;
					break;
				}
				else {
					if ( a[i] > a[i-1] ) gtr = 1;
					if ( a[i] < a[i-1] ) slr = 1;
					ptr++;
				}
			}

			cout << n - ptr << "\n";
		}	
	}

	return 0;
}
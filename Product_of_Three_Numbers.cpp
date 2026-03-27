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

		int a = 0, b = 0, c = 0;

		for ( int i = 2; ( i * i * i ) <= n; i++ ) {
			for ( int j = i+1; ( i * j * j ) <= n; j++ ) {
				if ( n % ( i * j ) ) continue;
				int cur = n / ( i * j );
				if ( cur > 1 && cur != i && cur != j ) {
					a = i;
					b = j;
					c = cur;
					break;
				}
			}
			if ( a ) break;
		}

		if ( !a ) cout << "NO" << "\n";
		else {
			cout << "YES" << "\n";
			cout << a << " " << b << " " << c << "\n";
		}
	}

	return 0;
}
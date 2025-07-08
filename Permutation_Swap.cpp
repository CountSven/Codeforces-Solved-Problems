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

		int maxG = 0;

		for ( int i = 1; i <= n; i++ ) {
			cin >> a[i];
			if ( a[i] != i ) maxG = __gcd( maxG, abs( a[i] - i ) );
		}

		cout << maxG << "\n";
	}
	
	return 0;
}
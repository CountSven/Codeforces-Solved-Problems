#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, k;
		cin >> n >> k;

		int val = INT_MAX;

		for ( int i = 1; i * i <= n; i++ ) {
			if ( n % i == 0 ) {
				if ( n / i <= k ) val = min( val, i );
				else if ( i <= k ) val = min( val, n / i );
			}
		}

		if ( val == INT_MAX ) cout << n << "\n";
		else cout << val << "\n";
	}

	return 0;
}
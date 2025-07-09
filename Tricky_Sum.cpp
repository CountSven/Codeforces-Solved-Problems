#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		long long n;
		cin >> n;

		long long sum1 = ( n * ( n + 1 ) ) / 2;

		long long sum2 = 0;

		for ( int i = 0; i <= n; i++ ) {
			long long cur = pow( 2, i );
			if ( cur > n ) break;
			else sum2 += cur;
		}

		long long mainSum = sum1 - ( 2 * sum2 );

		cout << mainSum << "\n";
	}

	return 0;
}
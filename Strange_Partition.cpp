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

		long long sum1 = 0, sum2 = 0;

		for ( int i = 0; i < n; i++ ) {
			cin >> a[i];
			sum1 += a[i];
			sum2 += ( ceil( ( 1.0 ) * a[i] / x ) );
		}

		sum1 = ( ceil( ( 1.0 ) * sum1 / x ) );
		
		cout << min( sum1, sum2 ) << " " << max( sum1, sum2 ) << "\n";
	}

	return 0;
}
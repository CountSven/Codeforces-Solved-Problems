#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	if ( n == m ) cout << 0 << " " << 0 << "\n";
	else if ( m == 1 ) cout << ( 1LL * n * ( n - 1 ) ) / 2 << " " << ( 1LL * n * ( n - 1 ) ) / 2 << "\n";
	else {
		int val1 = n - ( m - 1 );

		long long mx = ( ( 1LL * val1 * ( val1 - 1 ) ) / 2 );

		val1 = n / m;

		long long mn;

		if ( n % m == 0 ) mn = ( ( 1LL * val1 * ( val1 - 1 ) ) / 2 ) * m;
		else {
			int r = n % m;

			int val2 = val1 + 1;

			mn = ( ( ( 1LL * val1 * ( val1 - 1 ) ) / 2 ) * ( m - r ) ) + ( ( ( 1LL * val2 * ( val2 - 1 ) ) / 2 ) * ( r ) ); 
		}
		
		cout << mn << " " << mx << "\n";
	}

	return 0;
}
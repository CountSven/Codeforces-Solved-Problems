#include<bits/stdc++.h>
using namespace std;

long long bs( long long a[], long long n, long long x )
{
	long long low = 1, high = n;

	while ( low <= high ) {
		long long mid = ( low + high ) / 2;

		if ( a[mid] == x ) return mid;
		else if ( x < a[mid] ) high = mid-1;
		else low = mid+1;
 	}

 	return -1;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	long long a[10001];

	for ( long long i = 1; i <= 10000; i++ ) a[i] = ( 1LL * i * i * i );

	// for ( long long i = 1; i <= 10000; i++ ) cout << a[i] << "\n";

	int t;
	cin >> t;

	while ( t-- ) {
		long long x;
		cin >> x;

		bool isFnd = false;

		for ( long long i = 1; i <= 10000; i++ ) {
			if ( a[i] > x ) break;

			long long cur = bs( a, 10000, x - a[i] );

			// cout << cur << " ";
			
			if ( cur != -1 ) {
				isFnd = true;
				break;
			}
		}
		// cout << "\n";

		if ( isFnd ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;
}
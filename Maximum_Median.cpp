#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	long long n, k;
	cin >> n >> k;
	long long a[n];

	for ( int i = 0; i < n; i++ ) cin >> a[i];

	sort( a, a+n );

	long long val = a[n/2], passed = 1;

	for ( int i = ( n/2 ) + 1; i < n; i++ ) {
		long long need = ( a[i] - val ) * passed;
		if ( k >= need ) {
			val = a[i];
			k -= need;
			passed++;
		}
		else break;
	}
	// cout << k << "\n";

	val += ( k / passed );

	cout << val << "\n";

	return 0;
}
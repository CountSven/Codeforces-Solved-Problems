#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	long long a[n], b[n];

	for ( int i = 0; i < n; i++ ) cin >> a[i];
	for ( int i = 0; i < n; i++ ) cin >> b[i];

	for ( int i = 1; i < n; i++ ) {
		if ( i-2 >= 0 ) a[i] += max( b[i-2], b[i-1] );
		else a[i] += b[i-1];
		if ( i-2 >= 0 ) b[i] += max( a[i-2], a[i-1] );
		else b[i] += a[i-1];
	}

	cout << max( a[n-1], b[n-1] ) << "\n";

	return 0;
}
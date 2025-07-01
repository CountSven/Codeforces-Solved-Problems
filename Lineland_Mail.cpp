#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	long long a[n];

	for ( long long i = 0; i < n; i++ ) cin >> a[i];

	for ( long long i = 0; i < n; i++ ) {
		if ( i == 0 ) cout << abs( a[i] - a[i+1] ) << " " << abs( a[i] - a[n-1] ) << "\n";
		else if ( i == n-1 ) cout << abs( a[i] - a[n-2] ) << " " << abs( a[i] - a[0] ) << "\n";
		else {
			long long dis1 = abs( a[i] - a[i-1] );
			long long dis2 = abs( a[i] - a[i+1] );
			if ( dis1 < dis2 ) cout << dis1 << " ";
			else cout << dis2 << " ";
			
			long long dis3 = abs( a[i] - a[0] );
			long long dis4 = abs( a[i] - a[n-1] );
			if ( dis3 > dis4 ) cout << dis3 << "\n";
			else cout << dis4 << "\n";
		}
	}

	return 0;
}
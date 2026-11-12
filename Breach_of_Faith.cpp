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
		long long b[2*n+1], a[2*n+2];

		for ( int i = 1; i <= 2*n; i++ ) cin >> b[i];

		sort( b+1, b+(2*n+1) );
		reverse( b+1, b+(2*n+1) );

		int j = 1;

		long long sum = 0;

		for ( int i = 1; i <= 2*n+1; i += 2 ) {
			a[i] = b[j++];
			sum += a[i];
		}
	
		for ( int i = 4; i <= 2*n+1; i += 2 ) {
			a[i] = b[j++];
			sum -= a[i];
		}

		a[2] = sum;

		for ( int i = 1; i <= 2*n+1; i++ ) cout << a[i] << " \n"[i == 2*n+1];
	} 

	return 0;
}
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
	 	long long a[n], b[n];

	 	for ( int i = 0; i < n; i++ ) cin >> a[i];

	 	long long l = 1;

	 	for ( int i = 0; i < n; i++ ) l = lcm( l, a[i] );

	 	// cout << l << "\n";

		long long sum = 0;

	 	for ( int i = 0; i < n; i++ ) {
	 		b[i] = l / a[i];
	 		sum += b[i];
	 	}

	 	if ( sum >= l ) cout << -1 << "\n";
	 	else {
	 		for ( int i = 0; i < n; i++ ) cout << b[i] << " ";
	 		cout << "\n";
	 	}
	}

	return 0;
}
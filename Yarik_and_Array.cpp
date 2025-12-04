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
		int a[n];

		for ( int i = 0; i < n; i++ ) cin >> a[i];

		long long res = a[0], sum = a[0], par = abs(a[0]) % 2;

		for ( int i = 1; i < n; i++ ) {
			// cout << res << " ";
			long long cur = abs(a[i]) % 2;
			// cout << cur << " " << par << "\n";

			if ( cur != par ) {
				if ( sum + a[i] >= a[i] ) {
					sum += a[i];
					res = max( res, sum );
				}
				else {
					sum = a[i];
					res = max( res, sum );
				}
			}
			else {
				sum = a[i];
				res = max( res, sum );
			}

			par = cur; 
		}

		cout << res << "\n";
	}

	return 0;
}
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
		long long a[n];

		long long sum = 0;

		for ( int i = 0; i < n; i++ ) {
			cin >> a[i];
			sum += a[i];
		}

		if ( sum % n ) cout << "NO" << "\n";
		else {
			long long tar = sum / n;

			for ( int i = 1; i < n-1; i++ ) {
				if ( a[i-1] > tar ) {
					while ( a[i-1] > tar ) {
						a[i-1]--;
						a[i+1]++;
					}
				}
				else if ( a[i-1] < tar ) {
					while ( a[i-1] < tar ) {
						a[i-1]++;
						a[i+1]--;
					}
				}
			}

			// for ( int i = 0; i < n; i++ ) cout << a[i] << " ";
			// cout << "\n";

			int f = 0;

			for ( int i = 0; i < n; i++ ) {
				if ( a[i] != tar ) {
					f = 1;
					break;
				}
			}

			if ( !f ) cout << "YES" << "\n";
			else cout << "NO" << "\n";
		}
	}

	return 0;
}
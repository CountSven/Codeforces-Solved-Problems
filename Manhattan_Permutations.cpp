#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		ll n, k;
		cin >> n >> k;

		if ( k % 2 ) cout << "No" << "\n";
		else {
			int a[n+1];

			for ( int i = 1; i <= n; i++ ) a[i] = i;

			for ( int l = 1, r = n; l < r; l++, r-- ) {
				ll cur = ( r - l ) * 2;
				if ( cur <= k ) {
					swap( a[l], a[r] );
					k -= cur;
				}
				else {
					swap( a[l], a[l + ( k / 2 )] );
					k = 0;
				}
				if ( !k ) break;
			}

			if ( k ) cout << "No" << "\n";
			else {
				cout << "Yes" << "\n";
				for ( int i = 1; i <= n; i++ ) cout << a[i] << " ";
				cout << "\n";
			}
		}
	}

	return 0;
}
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
		int a[n+1], b[n+1];

		for ( int i = 1; i <= n; i++ ) cin >> a[i];
		for ( int i = 1; i <= n; i++ ) cin >> b[i];

		int l = 1, r = n;
		
		for ( int i = 1; i <= n; i++ ) {
			if ( b[i] != a[i] ) {
				l = i;
				break;
			}
		}

		for ( int i = n; i >= 1; i-- ) {
			if ( b[i] != a[i] ) {
				r = i;
				break;
			}
		}

		while ( l > 1 ) {
			if ( b[l-1] <= b[l] ) l--;
			else break;
		}

		while ( r < n ) {
			if ( b[r+1] >= b[r] ) r++;
			else break;
		}

		cout << l << " " << r << "\n";
	}

	return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	int a[n+1];

	for ( int i = 1; i <= n; i++ ) cin >> a[i];

	if ( is_sorted( a+1, a+n+1 ) ) {
		cout << "yes" << "\n";
		cout << 1 << " " << 1 << "\n";
	}
	else {
		int l = 0, r = 0;

		for ( int i = 1; i+1 <= n; i++ ) {
			if ( a[i] > a[i+1] ) {
				l = i;
				r = i+1;
				break;
			}
		}

		while ( r+1 <= n && a[r] >= a[r+1] ) r++;

		sort( a+l, a+r+1 );

		// for ( int i = 1; i <= n; i++ ) cout << a[i] << " ";
		// cout << "\n";

		if ( is_sorted( a+1, a+n+1 ) ) {
			cout << "yes" << "\n";
			cout << l << " " << r << "\n";
		}
		else cout << "no" << "\n";
	}

	return 0;
}
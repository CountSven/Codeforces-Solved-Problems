#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, x;
		cin >> n >> x;
		int a[n];

		int l = 0, r = 0, cnt = 0;

		for ( int i = 0; i < n; i++ ) {
			cin >> a[i];
			if ( a[i] == 1 ) {
				if ( cnt == 0 ) l = i;
				else r = i;
				cnt++;
			}
		}

		int cmp = ( r - l ) + 1;
		// cout << r << " " << l << " " << cmp << "\n";

		if ( cmp <= x ) cout << "YES" << "\n";
		else cout << "NO" << "\n"; 
	}

	return 0;
}
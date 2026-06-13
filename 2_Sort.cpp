#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, k;
		cin >> n >> k;
		int a[n];

		for ( int i = 0; i < n; i++ ) cin >> a[i];

		int l = -1, r = -1, cur = 1, cnt = 0;

		while ( cur < n ) {
			if ( 2 * a[cur] > a[cur - 1] ) {
				if ( l == -1 ) {
					l = cur - 1;
					r = cur;
				}
				else r = cur;
			}
			else {
				l = -1;
				r = -1;
			}

			if ( l != -1 && r != -1 ) {
				if ( r - l + 1 > k+1 ) l++;
				if ( r - l + 1 == k+1 ) cnt++;
			}
			// cout << cur << " " << l <<  " " << r << "\n";
			cur++;
		}

		cout << cnt << "\n";
	}  

	return 0;
}
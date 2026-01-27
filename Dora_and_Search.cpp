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
		int a[n+1];

		for ( int i = 1; i <= n; i++ ) cin >> a[i];

		int l = 1, r = n, mn = 1, mx = n;

		while ( l <= r ) {
			if ( a[l] == mn ) {
				l++;
				mn++;
			}
			else if ( a[l] == mx ) {
				l++;
				mx--;
			}
			else if ( a[r] == mn ) {
				r--;
				mn++;
			}
			else if ( a[r] == mx ) {
				r--;
				mx--;
			}
			else break;
		}

		if ( l > r ) cout << -1 << "\n";
		else cout << l << " " << r << "\n";
	}

	return 0;
}
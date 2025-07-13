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
		vector<int> a(n+2);
		a[0] = INT_MAX;
		a[n+1] = INT_MAX;

		int mx = 0;

		for ( int i = 1; i <= n; i++ ) {
			cin >> a[i];
			mx = max( mx, a[i] );
		}

		bool isDomi = false;
		int idx;

		for ( int i = 1; i <= n; i++ ) {
			if ( a[i] == mx && ( a[i] > a[i-1] || a[i] > a[i+1] ) ) {
				isDomi = true;
				idx = i;
				break;
			}
		}

		if ( isDomi ) cout << idx << "\n";
		else cout << -1 << "\n";
	}

	return 0;
}
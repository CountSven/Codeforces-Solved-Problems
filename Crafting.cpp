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
		int a[n], b[n];

		for ( int i = 0; i < n; i++ ) cin >> a[i];

		int idx = -1, mn = 1e9, cnt = 0;

		for ( int i = 0; i < n; i++ ) {
			cin >> b[i];
			if ( b[i] > a[i] ) {
				idx = i;
				cnt++;
			}
			else mn = min( mn, ( a[i] - b[i] ) );
		}

		if ( cnt > 1 ) cout << "NO" << "\n";
		else {
			if ( idx == -1 || ( b[idx] - a[idx] ) <= mn ) cout << "YES" << "\n";
			else cout << "NO" << "\n";
		}
	}

	return 0;
}
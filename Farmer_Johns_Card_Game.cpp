#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, m;
		cin >> n >> m;
		int idx[2005];

		for ( int i = 1; i <= n; i++ ) {
			for ( int j = 1; j <= m; j++ ) {
				int val;
				cin >> val;
				idx[val] = i;
			}
		}

		bool isPos = true;

		for ( int i = n; i < n*m; i++ ) {
			if ( idx[i] != idx[i - n] ) {
				isPos = false;
				break;
			}
		}

		if ( !isPos ) cout << -1 << "\n";
		else {
			for ( int i = 0; i < n; i++ ) cout << idx[i] << " ";
			cout << "\n";
		}
	}

	return 0;
}
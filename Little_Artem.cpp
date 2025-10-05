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

		for ( int i = 1; i <= n; i++ ) {
			for ( int j = 1; j <= m; j++ ) {
				if ( i == 1 && j == 1 ) cout << 'W';
				else cout << 'B';
			}
			cout << "\n";
		}
	}

	return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	char a[n+1][n+1];

	for ( int i = 1; i <= n; i++ ) {
		for ( int j = 1; j <= n; j++ ) cin >> a[i][j];
	}

	bool isX = true;

	char c = a[1][2], d = a[1][1];

	for ( int i = 1; i <= n; i++ ) {
		for ( int j = 1; j <= n; j++ ) {
			if ( i == j && a[i][j] != d ) {
				isX = false;
				break;
			}
			else if ( i+j == n+1 && a[i][j] != d ) {
				isX = false;
				break;
			}
			else if ( i != j && i+j != n+1 && a[i][j] != c ) {
				isX = false;
				break;
			}
		}
	}

	if ( isX && c != d ) cout << "YES" << "\n";
	else cout << "NO" << "\n";

	return 0;
}
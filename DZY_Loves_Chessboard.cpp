#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;
	char a[n][m], b[n][m];

	for ( int i = 0; i < n; i++ ) {
		for ( int j = 0; j < m; j++ ) cin >> a[i][j];
	}

	for ( int i = 0; i < n; i++ ) {
		for ( int j = 0; j < m; j++ ) {
			if ( i % 2 && j == 0 ) b[i][j] = 'W';
			else if ( i % 2 == 0 && j == 0 ) b[i][j] = 'B';
			else if ( b[i][j-1] == 'W' ) b[i][j] = 'B';
			else if ( b[i][j-1] == 'B' ) b[i][j] = 'W';
		}
	}

	for ( int i = 0; i < n; i++ ) {
		for ( int j = 0; j < m; j++ ) {
			if ( a[i][j] == '-' ) b[i][j] = '-';
		}
	}

	for ( int i = 0; i < n; i++ ) {
		for ( int j = 0; j < m; j++ ) cout << b[i][j];
		cout << "\n";		
	}

	return 0;
}
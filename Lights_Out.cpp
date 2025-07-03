#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int a[5][5];

	for ( int i = 0; i < 5; i++ ) {
		for ( int j = 0; j < 5; j++ ) a[i][j] = 1;
	}

	int b[3][3];

	for ( int i = 0; i < 3; i++ ) {
		for ( int j = 0; j < 3; j++ ) cin >> b[i][j];
	}

	for ( int i = 1; i < 4; i++ ) {
		for ( int j = 1; j < 4; j++ ) {
			if ( b[i-1][j-1] % 2 ) {
				if ( a[i][j] == 1 ) a[i][j] = 0;
				else a[i][j] = 1;
				if ( a[i+1][j] == 1 ) a[i+1][j] = 0;
				else a[i+1][j] = 1;
				if ( a[i-1][j] == 1 ) a[i-1][j] = 0;
				else a[i-1][j] = 1;
				if ( a[i][j+1] == 1 ) a[i][j+1] = 0;
				else a[i][j+1] = 1;
				if ( a[i][j-1] == 1 ) a[i][j-1] = 0;
				else a[i][j-1] = 1;
			}
		}
	}

	for ( int i = 1; i < 4; i++ ) {
		for ( int j = 1; j < 4; j++ ) cout << a[i][j];
		cout << "\n";
	}
	
	return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		char c[9][9];

		for ( int i = 0; i < 9; i++ ) {
			 for ( int j = 0; j < 9; j++ ) cin >> c[i][j];
		}

		c[0][1] = c[0][0];
		c[1][5] = c[1][4];
		c[2][6] = c[2][8];
		c[3][2] = c[3][1];
		c[4][3] = c[4][5];
		c[5][7] = c[5][6];
		c[6][0] = c[6][2];
		c[7][4] = c[7][3];
		c[8][8] = c[8][7];

		for ( int i = 0; i < 9; i++ ) {
			for ( int j = 0; j < 9; j++ ) cout << c[i][j];
				cout << "\n";
		}
		cout << "\n";
	}

	return 0;
}
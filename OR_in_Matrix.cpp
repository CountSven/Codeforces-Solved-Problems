#include<bits/stdc++.h>
using namespace std;

int n, m;
int a[101][101], b[101][101], mat[101][101];

void dfs( int i, int j )
{
	int r = i, c = j, f = 0;

	while ( r >= 0 && !f ) {
		if ( !a[r][c] ) {
			f = 1;
			break;
		}
		r--;
	}

	r = i;

	while ( r < n && !f ) {
		if ( !a[r][c] ) {
			f = 1;
			break;
		}
		r++;
	}

	r = i;

	while ( c >= 0 && !f ) {
		if ( !a[r][c] ) {
			f = 1;
			break;
		}
		c--;
	}

	c = j;

	while ( c < m && !f ) {
		if ( !a[r][c] ) {
			f = 1;
			break;
		}
		c++;
	}

	if ( !f ) b[i][j] = 1;
}

void fill( int i, int j )
{
	int r = i, c = j;

	while ( r >= 0 ) mat[r--][c] = 1;

	r = i;

	while ( r < n ) mat[r++][c] = 1;

	r = i;

	while ( c >= 0 ) mat[r][c--] = 1;

	c = j;

	while ( c < m ) mat[r][c++] = 1;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n >> m;

	for ( int i = 0; i < n; i++ ) {
		for ( int j = 0; j < m; j++ ) cin >> a[i][j]; 
	}

	for ( int i = 0; i < n; i++ ) {
		for ( int j = 0; j < m; j++ ) {
			if ( a[i][j] ) dfs( i, j ); 
		} 
	}

	for ( int i = 0; i < n; i++ ) {
		for ( int j = 0; j < m; j++ ) {
			if ( b[i][j] ) fill( i, j );
		}
	}

	int poss = 1;

	for ( int i = 0; i < n; i++ ) {
		for ( int j = 0; j < m; j++ ) {
			if ( a[i][j] != mat[i][j] ) {
				poss = 0;
				break;
			}
		}
	}

	if ( !poss ) cout << "NO" << "\n";
	else {
		cout << "YES" << "\n";
		for ( int i = 0; i < n; i++ ) {
			for ( int j = 0; j < m; j++ ) cout << b[i][j] << " ";
			cout << "\n";
		}
	}

	return 0;
}
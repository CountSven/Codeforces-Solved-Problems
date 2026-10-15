#include<bits/stdc++.h>
using namespace std;

int dx[] = { -1, 1, 0, 0 };
int dy[] = { 0, 0, -1, 1 };

char c[50][50];
int vis[50][50];
int n, m, f = 0;

void dfs( int i, int j, int pi, int pj )
{
    // cout << i << " " << j << " -> " << pi << " " << pj << "\n";
    if ( f ) return; 
    vis[i][j] = 1;

    for ( int k = 0; k < 4; k++ ) {
        int ni = i + dx[k];
        int nj = j + dy[k];
        if ( min( ni, nj) < 0 || ni >= n || nj >= m ) continue;
        if ( ni == pi && nj == pj ) continue;
        if ( c[ni][nj] != c[i][j] ) continue;
        if ( vis[ni][nj] ) {
            f = 1;
            return;
        }
        dfs( ni, nj, i, j );
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;

    for ( int i = 0; i < n; i++ ) {
        for ( int j = 0; j < m; j++ ) cin >> c[i][j];
    }

    for ( int i = 0; i < n; i++ ) {
        for ( int j = 0; j < m; j++ ) {
            memset( vis, 0, sizeof( vis ) );
            dfs( i, j, -1, -1 );
            if ( f ) break;
        }
        if ( f ) break;
    }

    if ( f ) cout << "Yes" << "\n";
    else cout << "No" << "\n";

    return 0;
}
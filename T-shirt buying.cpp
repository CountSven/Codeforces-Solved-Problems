#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();

    int n;
    cin >> n;
    int p[n], a[n], b[n];

    for ( int i = 0; i < n; i++ ) cin >> p[i];
    for ( int i = 0; i < n; i++ ) cin >> a[i];
    for ( int i = 0; i < n; i++ ) cin >> b[i];

    priority_queue<int, vector<int>, greater<int>> pq[10][10];

    for ( int i = 0; i < n; i++ ) pq[a[i]][b[i]].push( p[i] );

    int m;
    cin >> m;

    while ( m-- ) {
        int c;
        cin >> c;

        int ans = INT_MAX;
        int f, b;

        for ( int i = 1; i <= 3; i++ ) {
            if ( !pq[c][i].empty() && pq[c][i].top() < ans ) {
                ans = pq[c][i].top();
                f = c;
                b = i;
            }
        }

        for ( int i = 1; i <= 3; i++ ) {
            if ( !pq[i][c].empty() && pq[i][c].top() < ans ) {
                ans = pq[i][c].top();
                f = i;
                b = c;
            }
        }

        if ( ans != INT_MAX )  pq[f][b].pop();
        else ans = -1;

        cout << ans << " ";
    }

    return 0;
}

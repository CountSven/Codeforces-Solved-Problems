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
        vector<int> vis( n+1, 0 );

        int idx = 0;

        for ( int i = 0; i < n; i++ ) {
            int k;
            cin >> k;

            int f = 0;

            while ( k-- )  {
                int g;
                cin >> g;
                if ( !vis[g] && !f ) {
                    vis[g] = 1;
                    f = 1;
                }
            }

            if ( !f && !idx ) idx = i+1;
        }

        if ( !idx ) cout << "OPTIMAL" << "\n";
        else {
            for ( int i = 1; i <= n; i++ ) {
                if ( !vis[i] ) {
                    cout << "IMPROVE" << "\n";
                    cout << idx << " " << i << "\n";
                    break;
                }
            }
        }
    }
    
    return 0;
}
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

        int res = n;

        for ( int i = 0; i <= 2; i++ ) {
            for ( int j = 0; j <= 1; j++ ) {
                for ( int k = 0; k <= 4; k++ ) {
                    for ( int l = 0; l <= 2; l++ ) {
                        int cur = n - ( ( i * 1 ) + ( j * 3 ) + ( k * 6 ) + ( l * 10 ) );
                        if ( cur >= 0 && cur % 15 == 0 ) {
                            res = min( res, i + j + k + l + ( cur / 15 ) );
                        }
                    }
                }
            }
        }

        cout << res << "\n";
    }
    
    return 0;
}
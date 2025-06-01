#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while ( t-- ) {
        int n;
        cin >> n;
        int a[n];
        int b[n], c[n];

        int mn = 1000123;
        int mx = -1000123;

        for ( int i = 0; i < n; i++ ) {
            cin >> a[i];
            mn = min( mn, a[i] );
            mx = max( mx, a[i] );
        }

        for ( int i = 0; i < n; i++ ) {
            if ( i == 0 ) {
                b[i] = mx;
                c[i] = mx;
            }
            else {
                b[i] = mn;
                c[i] = mx;
            }
        }

        int sum = 0;

        for ( int i = 0; i < n; i++ ) {
            sum += ( c[i] - b[i] );
        }

        cout << sum << endl;
    }

    return 0;
}

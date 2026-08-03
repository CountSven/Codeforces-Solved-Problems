#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), prefG(n, 0), suffG(n, 1e9), pGood(n, 1), sGood(n, 1);

    for ( int i = 0; i < n; i++ ) cin >> a[i];

    for ( int i = 1; i < n; i++ ) {
        prefG[i] = __gcd( a[i], a[i-1] );
        if ( prefG[i-1] > prefG[i] ) pGood[i] = 0;
        pGood[i] = min( pGood[i-1], pGood[i] );
    }

    for ( int i = n-2; i >= 0; i-- ) {
        suffG[i] = __gcd( a[i], a[i+1] );
        if ( suffG[i] > suffG[i+1] ) sGood[i] = 0;
        sGood[i] = min( sGood[i+1], sGood[i] ); 
    }

    if ( pGood[n-2] || sGood[1] ) {
        cout << "YES" << "\n";
        return;
    }

    for ( int i = 1; i+1 < n; i++ ) {
        if ( pGood[i-1] && sGood[i+1] ) {
            int g = __gcd( a[i-1], a[i+1] );
            if ( prefG[i-1] <= g && g <= suffG[i+1] ) {
                cout << "YES" << "\n";
                return;
            }
        }
    }

    cout << "NO" << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) solve();
}
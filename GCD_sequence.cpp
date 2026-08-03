#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> a(2e5 + 5);

bool chk( int idx )
{
    vector<int> v;

    for ( int i = 0; i < n; i++ ) {
        if ( i != idx ) v.push_back( a[i] );
    }

    int last = 0;

    for ( int i = 0; i+1 < v.size(); i++ ) {
        int cur = __gcd( v[i], v[i+1] );
        if ( last > cur ) return false;
        last = cur;
    }

    return true;
}

void solve() {
    cin >> n;

    for ( int i = 0; i < n; i++ ) cin >> a[i];

    int last = 0, idx = -1;

    for ( int i = 0; i+1 < n; i++ ) {
        int cur = __gcd( a[i], a[i+1] );
        if ( last > cur ) {
            idx = i;
            break;
        }
        last = cur;
    }

    if ( idx == -1 ) {
        cout << "YES" << "\n";
        return;
    }

    if ( chk( idx - 1 ) || chk( idx ) || chk( idx + 1 ) ) cout << "YES" << "\n";
    else cout << "NO" << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) solve();
}
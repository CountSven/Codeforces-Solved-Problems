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

        for ( int i = 0; i < n; i++ ) cin >> a[i];

        bool isSemitones = true;

        for ( int i = 0; i < n-1; i++ ) {
            if ( ! ( ( abs( a[i] - a[i+1] ) == 5 ) || ( abs( a[i] - a[i+1] ) == 7 ) ) ) {
                isSemitones = false;
                break;
            }
        }

        if ( isSemitones ) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}

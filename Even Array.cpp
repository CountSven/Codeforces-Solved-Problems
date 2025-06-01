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

        int cnt1 = 0, cnt2 = 0;

        for ( int i = 0; i < n; i++ ) {
            if ( i % 2 != a[i] % 2 ) {
                if ( i % 2 == 0) cnt1++;
                else cnt2++;
            }
        }

        if ( cnt1 == cnt2 ) cout << cnt1 << endl;
        else cout << "-1" << endl;
    }

    return 0;
}

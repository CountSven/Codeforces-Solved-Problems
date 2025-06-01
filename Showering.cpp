#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while ( t-- ) {
        long long n, s, m;
        cin >> n >> s >> m;

        bool isPos = false;

        vector<long long> vl(n), vr(n);

        for ( int i = 0; i < n; i++ ) cin >> vl[i] >> vr[i];

        if ( vl[0] >= s ) isPos = true;

        for ( int i = 0; i < n-1; i++ ) {
            if ( vl[i+1] - vr[i] >= s ) isPos = true;
        }

        if ( m - vr.back() >= s ) isPos = true;

        if ( isPos ) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}

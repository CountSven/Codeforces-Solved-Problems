#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while ( t-- ) {
        int x, y, a;
        cin >> x >> y >> a;

        if ( a % ( x + y ) < x ) cout << "No" << endl;
        else cout << "YES" << endl;
    }

    return 0;
}

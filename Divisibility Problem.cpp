#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while ( t-- ) {
        int a, b;
        cin >> a >> b;

        long long res = 0;

        if ( b >= a ) res = b - a ;
        else if ( a % b == 0 ) res = 0;
        else res = ( b - ( a % b ) );

        cout << res << endl;
    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;

    long long res;

    if ( n % 2 == 0 ) {
        if ( k <= n/2 ) {
            res = 1 + ( ( k-1 ) * 2 );
        }
        else {
            res = ( k - ( n/2 ) ) * 2;
        }
    }
    else {
        if ( k <= n/2 + 1 ) {
            res = 1 + ( ( k-1 ) * 2 );
        }
        else {
            res = ( k - ( n/2 + 1 ) ) * 2;
        }
    }

    cout << res << endl;

    return 0;
}

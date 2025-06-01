#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while ( t-- ) {
        long long a, b, k;
        cin >> a >> b >> k;

        long long sum = 0;

        if ( k % 2 == 0 ) sum = ( a - b ) * ( k / 2 );
        else sum = ( a - b ) * ( k / 2 ) + a;

        cout << sum << endl;
    }

    return 0;
}

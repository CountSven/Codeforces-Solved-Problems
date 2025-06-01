#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while ( t-- ) {
        int a, b;
        cin >> a >> b;

        long long GCD = __gcd( a, b );
        long long LCM = a * ( b / GCD );

        cout << LCM << endl;
    }

    return 0;
}

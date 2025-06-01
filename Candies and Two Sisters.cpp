#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while ( t-- ) {
        long long n;
        cin >> n;

        long long res;

        if ( n % 2 ) res = n / 2;
        else res = ( n / 2 ) - 1;

        cout << res << endl;
    }

    return 0;
}

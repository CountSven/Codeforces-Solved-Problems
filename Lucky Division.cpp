#include<bits/stdc++.h>
using namespace std;

bool isLucky ( int n )
{
    while ( n > 0 ) {
        int rem = n % 10;
        if ( rem != 4 && rem != 7 ) return false;
        n /= 10;
    }

    return true;
}

int main()
{
    int n;
    cin >> n;

    for ( int i = 1; i <= n; i++ ) {
        if ( isLucky(i) && n % i == 0 ) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;

    return 0;
}

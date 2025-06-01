#include<bits/stdc++.h>
using namespace std;

bool isOk ( int n )
{
    if ( n % 3 == 0 ) return true;
    return false;
}

int main()
{
    int t;
    cin >> t;

    while ( t-- ) {
        int a, b, c;
        cin >> a >> b >> c;

        int comp = ( a + b + c ) / 3;

        if ( ( a + b + c ) % 3 == 0 && a <= comp && b <= comp ) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}

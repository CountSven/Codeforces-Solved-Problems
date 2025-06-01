#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int x;

    if ( n % 2 ) {
        x = n - 9;
        cout << x << " 9" << endl;
    }
    else {
        x = n - 8;
        cout << x << " 8" << endl;
    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 0;

    int t;
    cin >> t;

    while ( t-- ) {
        string s;
        cin >> s;

        if ( s == "++X" || s == "X++" ) n++;
        else n--;
    }

    cout << n << endl;

    return 0;
}

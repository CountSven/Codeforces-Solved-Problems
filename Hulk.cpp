#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s1 = "I hate ",  s2 = "it";

    string s3 = "that I love ", s4 = "that I hate ";

    if ( n == 1 ) cout << s1 + s2 << endl;
    else {
        string mid;

        for ( int i = 1; i < n; i++ ) {
            if ( i % 2 ) mid += s3;
            else mid += s4;
        }

        cout << s1 + mid + s2 << endl;
    }

    return 0;
}



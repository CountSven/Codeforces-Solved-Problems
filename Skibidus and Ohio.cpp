#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while ( t-- ) {
        string s;
        cin >> s;

        bool isDone = false;

        for ( int i = 1; i < s.size(); i++ ) {
            if ( s[i-1] == s[i] ) isDone = true;
        }

        if ( isDone ) cout << 1 << endl;
        else cout << s.size() << endl;
    }

    return 0;
}

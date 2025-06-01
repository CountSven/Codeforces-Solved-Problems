#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while ( t-- ) {
        string s;
        cin >> s;

        for ( int i = 0; i < s.size(); i++ ) {
            if ( s[i] == 'u' && s[i+1] == 's' && s[i+2] == '\0' ) {
                s.pop_back();
                s.pop_back();
                s += 'i';
            }
        }

        cout << s << endl;
    }

    return 0;
}


#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    bool isDng = false;

    for ( int i = 0; i < s.size(); i++ ) {
        if ( s[i] == s[i+1] && s[i+1] == s[i+2] && s[i+2] == s[i+3] && s[i+3] == s[i+4] && s[i+4] == s[i+5]&& s[i+5] == s[i+6] ) {
            isDng = true;
            break;
        }
    }

    if ( isDng ) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}

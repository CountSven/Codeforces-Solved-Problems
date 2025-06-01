#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n;
    cin >> s;

    int cntAnt = 0, cntDan = 0;

    for ( int i = 0; i < s.size(); i++ ) {
        if ( s[i] == 'A' ) cntAnt++;
        else cntDan++;
    }

    if ( cntAnt > cntDan ) cout << "Anton" << endl;
    else if ( cntAnt < cntDan ) cout << "Danik" << endl;
    else cout << "Friendship" << endl;

    return 0;
}

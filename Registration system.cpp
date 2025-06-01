#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    map<string, int> cnt;

    while ( t-- ) {
        string s;
        cin >> s;
        cnt[s]++;

        if ( cnt[s] == 1 ) cout << "OK" << endl;
        else cout << s << cnt[s]-1 << endl;
    }

    return 0;
}

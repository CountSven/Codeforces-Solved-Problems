#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    for ( int i = 0; i < s.size(); i++ ) s[i] = tolower( s[i] );

    map<char, int> cnt;

    for ( char c = 'a'; c <= 'z'; c++ ) cnt[c]++;

    for ( int i = 0; i < s.size(); i++ ) cnt[s[i]]++;

    bool isPangram = true;

    for ( auto u : cnt ) {
        if ( ( u.second == 1 ) ) {
            isPangram = false;
            break;
        }
        else isPangram = true;
    }

    if ( isPangram ) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}

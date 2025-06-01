#include<bits/stdc++.h>
using namespace std;

bool isVowel (char c)
{
    return ( c == 'a' || c == 'o' || c == 'y' || c == 'e' || c == 'u' || c == 'i' );
}

int main()
{
    string s;
    cin >> s;

    string res;

    for ( int i = 0; i < s.size(); i++ ) {
        char c = tolower(s[i]);
        if ( !isVowel(c) ) {
            res += '.';
            res += c;
        }
    }

    cout << res << endl;

    return 0;
}

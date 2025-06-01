#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int n = s.size();

        if ( n % 2 ) cout << "NO" << "\n";
        else {
            string s1, s2;

            for ( int i = 0; i < n/2; i++ ) s1 += s[i];
            for ( int i = n/2; i < s.size(); i++ ) s2 += s[i];

            if ( s1 == s2 ) cout << "YES" << "\n";
            else cout << "NO" << "\n";
        }
    }

    return 0;
}

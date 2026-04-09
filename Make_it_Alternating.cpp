#include<bits/stdc++.h>
using namespace std;

long long mod = 998244353;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while ( t-- ) {
        string s;
        cin >> s;

        long long cnt = 0, cur = 1, res = 1;

        for ( int i = 1; i < (int)s.size(); i++ ) {
            if ( s[i] == s[i-1] ) cur++;
            else {
                res = res * cur % mod;
                cnt += cur - 1;
                cur = 1;
            }
        }

        res = res * cur % mod;
        cnt += cur - 1;

        for ( int i = 1; i <= cnt; i++ ) res = res * i % mod;

        cout << cnt << " " << res << "\n";    
    }

    return 0;
}
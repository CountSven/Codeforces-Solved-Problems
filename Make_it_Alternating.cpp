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
        
        int n = s.size();
        
        long long cnt = 1, cur = 1, res = 1;
        
        for ( int i = 1; i < n; i++ ) {
            if (s[i] != s[i-1] ) {
                cur++;
                res = res * cnt % mod;
                cnt = 1;
            }
            else cnt++;
        }
        
        res = res * cnt % mod;
        
        for ( int i = 1; i <= ( n - cur ); i++ ) res = res * i % mod;
        
        cout << n - cur << " " << res << "\n";
    }
    
    return 0;
}
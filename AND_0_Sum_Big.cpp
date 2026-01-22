#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while ( t-- ) {
        long long n, k;
        cin >> n >> k;
        
        long long res = 1;
        
        while ( k-- ) res = ( res * n ) % 1000000007;
        
        cout << res << "\n";
    }
    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while ( t-- ) {
        int n;
        cin >> n;
        vector<long long> v(n), pref(n), suf(n);
        
        for ( int i = 0; i < n; i++ ) cin >> v[i];
        
        pref[1] = 1;
        
        for ( int i = 1; i+1 < n; i++ ) {
            if ( v[i] - v[i-1] > v[i+1] - v[i] ) pref[i+1]++;
            else pref[i+1] += v[i+1] - v[i];
            pref[i+1] += pref[i];
        }
        
        suf[n-2] = 1;
        
        for ( int i = n-2; i-1 >= 0; i-- ) {
            if ( v[i] - v[i-1] < v[i+1] - v[i] ) suf[i-1]++;
            else suf[i-1] += v[i] - v[i-1];
            suf[i-1] += suf[i];
        }
        
        int m;
        cin >> m;
        
        while ( m-- ) {
            int x, y;
            cin >> x >> y;
            x--;
            y--;
            
            if ( x < y ) cout << pref[y] - pref[x] << "\n";
            else cout << suf[y] - suf[x] << "\n";
        }
    } 
    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, k;
    cin >> n >> k;
    vector<ll> v(n);   

    for ( int i = 0; i < n; i++ ) cin >> v[i];
    
    ll l = 1, r = 2e5, mx = 0;
    
    while ( l <= r ) {
        ll mid = l + ( r - l ) / 2;
        vector<ll> prefsum(n+2), prefmin(n+2);  
        
        for ( int i = 0; i < n; i++ ) {
            if ( v[i] >= mid ) prefsum[i+1] = 1;
            else prefsum[i+1] = -1;
            prefsum[i+1] += prefsum[i];
            prefmin[i+1] = min( prefsum[i+1], prefmin[i] );
        }
            
        ll f = 0 ;
    
        for ( int r = k; r <= n; r++ ) {
            if ( prefsum[r] > prefmin[r - k] ) {
                f = 1;
                break;
            }
        }
        
        if ( f ) {
            mx = max( mx, mid );
            l = mid + 1;
        }
        else r = mid - 1;
    }
    
    cout << mx << "\n";
    
    return 0;
}
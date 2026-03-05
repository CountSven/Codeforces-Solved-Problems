#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while ( t-- ) {
        long long n, m, k;
        cin >> n >> m >> k;
        
        long long low = 1, high = m, res = m;
        
        while ( low <= high ) {
            long long mid = ( low + high ) / 2;
            
            long long blocks = ( m / ( mid + 1 ) );
            long long now = blocks * mid;
            long long ext = m % ( mid + 1 );
            long long cur = ( now + ext ) * n;
            // cout << mid << " " << blocks << " " << now << " " << ext << " " << cur << "\n";
            
            if ( cur >= k ) {
                res = mid;
                high = mid-1;
            }
            else low = mid+1;
        }
        
        cout << res << "\n";
    }
    
    return 0;
}
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
        int a[105][105];
        
        map<int,int> mp;
        
        for ( int i = 0; i < n; i++ ) {
            for ( int j = 0; j < n-1; j++ ) cin >> a[i][j];
            
            mp[a[i][0]]++;
        }
        
        for ( int i = 0; i < n; i++ ) {
            if ( mp[a[i][0]] != n-1 ) {
                for ( auto it : mp ) {
                    if( it.second == n-1 ) cout << it.first << " ";
                }
                
                for ( int j = 0; j < n-1; j++ ) cout << a[i][j] << " ";
                cout << "\n";
            }
        }
    }
    
    return 0;
}
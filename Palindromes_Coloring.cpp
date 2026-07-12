#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while ( t-- ) {
        int n, k;
        string s;
        cin >> n >> k >> s;
        map<char, int> mp;
        
        for ( char c : s ) mp[c]++;
        
        priority_queue<int> freqs;
        priority_queue<int, vector<int>, greater<int>> mns;
        
        for ( auto [x, y] : mp ) freqs.push( y );
        
        for ( int i = 0; i < k; i++ ) mns.push( 0 );
        
        int mx = n / k;
        
        while( freqs.size() ) {
            int cur = mns.top(), have = freqs.top();
            if ( cur == mx || cur % 2 ) break;
            freqs.pop();
            mns.pop();
            
            int tmp = cur;
            cur = min( mx, cur + min( 2, have ) );
            have -= ( cur - tmp );
            
            //cout << cur << " " << have << "\n";
            mns.push( cur );
            if ( have ) freqs.push( have );
        }
        
        cout << mns.top() << "\n";
    }
    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    vector<int> v;
    
    while ( n ) {
        int tmp = n, cur = 0, pw = 1;
        
        while ( tmp ) {
            if ( tmp % 10 ) cur += pw;
            tmp /= 10;
            pw *= 10;
        }
        
        v.push_back( cur );
        n -= cur;
    }
    
    cout << v.size() << "\n";
    sort( v.begin(), v.end() );
    for ( auto u : v ) cout << u << " ";
    cout << "\n";
    
    return 0;
}
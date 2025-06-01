#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    set<int> s;

    for ( int i = 0; i < n; i++ ) {
        int x;
        cin >> x;
        s.insert( x ) ;
    }

    s.erase( s.begin() );

    if ( s.empty() ) cout << "NO" << endl;
    else cout << *s.begin() << endl;

    return 0;
}

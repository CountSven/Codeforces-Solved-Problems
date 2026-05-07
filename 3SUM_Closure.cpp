#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while ( t-- ) {
        int n, pos = 0, neg = 0, zer = 0;
        cin >> n;
        vector<int> v;

        for ( int i = 0; i < n; i++ ) {
            int x;
            cin >> x;
            if ( x == 0 ) {
                if ( !zer ) v.push_back( 0 );
                zer = 1;
            }
            else {
                if ( x > 0 ) pos++;
                else neg++;
                v.push_back( x ); 
            }
        }

        if ( pos > 2 || neg > 2 ) cout << "NO" << "\n";
        else {
            int f = 0;

            n = v.size();

            for ( int i = 0; i < n; i++ ) {
                for ( int j = i+1; j < n; j++ ) {
                    for ( int k = j+1; k < n; k++ ) {
                        int val = v[i] + v[j] + v[k], cur = 0;
                        for ( int l = 0; l < n; l++ ) {
                            if ( val == v[l] ) {
                                cur = 1;
                                break;
                            }
                        }
                        if ( !cur ) {
                            f = 1;
                            break;
                        }
                    }
                    if ( f ) break;
                }
                if ( f ) break;
            }

            if ( f ) cout << "NO" << "\n";
            else cout << "YES" << "\n"; 
        }
    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for ( int i = 0; i < n; i++ ) cin >> v[i];

    int s = 0, d = 0, turnDone = 0;

    while ( !v.empty() ) {
        if ( turnDone == 0 ) {
            if ( v[0] > v.back() ) {
                s += v[0];
                v.erase ( v.begin() );
            }
            else {
                s += v.back();
                v.pop_back();
            }
            turnDone = 1;
        }
        else {
            if ( v[0] > v.back() ) {
                d += v[0];
                v.erase ( v.begin() );
            }
            else {
                d += v.back();
                v.pop_back();
            }
            turnDone = 0;
        }
    }

    cout << s << " " << d << endl;

    return 0;
}

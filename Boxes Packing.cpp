#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];

    map<int, int> cnt;

    for ( int i = 0; i < n; i++ ) {
        cin >> a[i];
        cnt[a[i]]++;
    }

    int mxFreq = 0;

    for ( auto u : cnt ) {
        if ( u.second > mxFreq ) mxFreq = u.second;
    }

    cout << mxFreq << endl;

    return 0;
}

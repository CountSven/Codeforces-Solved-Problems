#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[5][5];

    for ( int i = 0; i < 5; i++ ) {
        for ( int j = 0; j < 5; j++ ) cin >> a[i][j];
    }

    int cnt = 0;

    for ( int i = 0; i < 5; i++ ) {
        for ( int j = 0; j < 5; j++ ) {
            if ( a[i][j] == 1 ) {
                cnt += abs(2 - i);
                cnt += abs(2 - j);
            }
        }
    }

    cout << cnt << endl;

    return 0;
}

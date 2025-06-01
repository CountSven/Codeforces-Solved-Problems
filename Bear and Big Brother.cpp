#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    int cnt = 0;

    if ( x <= y ) {
        while ( ! ( x > y ) ) {
            x *= 3;
            y *= 2;
            cnt++;
        }
    }

    cout << cnt << endl;
}

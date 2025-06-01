#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while ( t-- ) {
        int n;
        cin >> n;

        map<int, int> cnt;

        bool isPos = false;

        for ( int i = 0; i < n; i++ ) {
            int x;
            cin >> x;
            cnt[x]++;

            if ( cnt[0] >= 3 && cnt[1] >= 1 && cnt[2] >= 2 && cnt[3] >= 1 && cnt[5] >= 1 && !isPos ) {
                cout << i + 1 << endl;
                isPos = true;
            }
        }

        if ( !isPos ) cout << "0" << endl;
    }

    return 0;
}

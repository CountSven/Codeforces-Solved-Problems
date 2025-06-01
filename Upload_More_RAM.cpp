#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        if ( n == 0 ) cout << k << "\n";
        else if ( k == 0 ) cout << n << "\n";
        else {
            cout << ( ( n * k ) - ( k - 1 ) ) << "\n";
        }
    }

    return 0;
}
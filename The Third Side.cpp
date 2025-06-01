#include<bits/stdc++.h>
using namespace std;

const int mx = 2e5 + 123;
int a[mx];

int main()
{
    int t;
    cin >> t;

    while ( t-- ) {
        int n;
        cin >> n;

        long long sum = 0;

        for ( int i = 0; i < n; i++ ) {
            cin >> a[i];
            sum += a[i];
        }

        cout << sum-n+1 << endl;
    }

    return 0;
}

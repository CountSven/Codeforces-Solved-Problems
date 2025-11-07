#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n), freq( 10005, 0 );

        for ( int i = 0; i < n; i++ ) {
        	cin >> v[i];
        	freq[v[i]]++;
        }

        int mx = 1;

        for ( int i = 1; i <= 10000; i++ ) mx = max( mx, freq[i] + freq[i+1] );

        cout << mx << "\n";
    }

    return 0;
}

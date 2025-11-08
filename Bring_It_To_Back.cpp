#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        if ( n == 2 && m % 2 == 0 ) cout << 1 << " " << 2 << "\n";
        else {
        	if ( m >= n ) m = n;

        	for ( int i = n; i > n-m; i-- ) cout << i << " ";
        	for ( int i = 1; i <= n-m; i++ ) cout << i << " ";
        	cout << "\n";
        }
    }

	return 0;
}
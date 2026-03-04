#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n;
		cin >> n;
		int a[n+1];

		for ( int i = 1; i <= n; i++ ) cin >> a[i];

		if ( a[n] == 0 ) {
			for ( int i = 1; i <= n+1; i++ ) cout << i << " ";
			cout << "\n";
		}
		else if ( a[1] == 1 ) {
			cout << n + 1 << " ";
			for ( int i = 1; i <= n; i++ ) cout << i << " ";
			cout << "\n"; 
		}
		else {
			int idx = -1;

			for ( int i = 1; i+1 <= n; i++ ) {
				if ( a[i] == 0 && a[i+1] == 1 ) {
					idx = i;
					break;
				}
			}

			for ( int i = 1; i <= idx; i++ ) cout << i << " ";
			cout << n + 1 << " ";
			for ( int i = idx+1; i <= n; i++ ) cout << i << " ";
			cout << "\n";
		}
	}

	return 0;
}
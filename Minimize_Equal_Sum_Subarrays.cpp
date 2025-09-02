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
		int a[n];

		for ( int i = 0; i < n; i++ ) cin >> a[i];

		for ( int i = 0; i < n; i++ ) {
			if ( a[i] == n ) cout << 1 << " ";
			else cout << a[i] + 1 << " ";
		}
		cout << "\n";
	}

	return 0;
}
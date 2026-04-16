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

		int mn = 1e9, mnIdx = 0;

		for ( int i = 0; i < n; i++ ) {
			cin >> a[i];
			if ( a[i] < mn ) {
				mn = a[i];
				mnIdx = i;
			}
		}

		cout << n - 1 << "\n";
		for ( int i = 0; i < n; i++ ) {
			if ( i == mnIdx ) continue;
			if ( i % 2 == mnIdx % 2 ) {
				cout << mnIdx+1 << " " << i+1 << " " << mn << " " << mn << "\n";
			}
			else {
				cout << mnIdx+1 << " " << i+1 << " " << mn << " " << mn+1 << "\n";
			}
		}
	}

	return 0;
}
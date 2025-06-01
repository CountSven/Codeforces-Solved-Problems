#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, k;
		cin >> n >> k;
		int a[n];

		for ( int i = 0; i < n; i++ ) cin >> a[i];

		bool isHalloumi = true;

		for ( int i = 1; i < n; i++ ) {
			if ( k == 1 && a[i] < a[i-1] ) isHalloumi = false;
		}

		if ( isHalloumi ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;
}
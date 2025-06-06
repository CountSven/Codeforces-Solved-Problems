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

		bool isFound = false;

		for ( int i = 0;i < n; i++ ) {
			cin >> a[i];
			if ( a[i] == k ) isFound = true;
		}

		if ( isFound ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;
}
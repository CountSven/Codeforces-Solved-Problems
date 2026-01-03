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

		int res = INT_MAX;

		for ( int i = 0; i < n; i++ ) {
			cin >> a[i];

			if ( a[i] != i ) res &= ( a[i] & i );
		}

		cout << res << "\n";
	}

	return 0;
}
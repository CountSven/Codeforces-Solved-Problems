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

		reverse( a, a+n );

		long long cur = a[0];

		for ( int i = 1; i < n; i++ ) {
			if ( a[i] > cur ) cur = a[i];
			else cur++;
		}

		cout << cur << "\n";
	}

	return 0;
}
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

		int curMax = a[n-1] - a[0];

		for ( int i = 0; i < n; i++ ) curMax = max( curMax, a[n-1] - a[i] );

		for ( int i = 1; i < n; i++ ) curMax = max( curMax, a[i] - a[0] );

		for ( int i = 0; i < n-1; i++ ) curMax = max( curMax, a[i] - a[i+1] );

		cout << curMax << "\n";
	}

	return 0;
}
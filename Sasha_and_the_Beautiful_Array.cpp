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

		long long cnt = 0;

		sort( a, a+n );

		for ( int i = 1; i < n; i++ ) cnt += a[i] - a[i-1];

		cout << cnt << "\n";
	}

	return 0;
}
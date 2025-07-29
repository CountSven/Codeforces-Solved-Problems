#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, t;
	cin >> n >> t;
	int a[n];

	for ( int i = 1; i < n; i++ ) cin >> a[i];

	int cur = 1;

	while ( cur <= n ) {
		cur += a[cur];
		if ( cur == t || cur == n ) break;
	}

	if ( cur == t ) cout << "YES" << "\n";
	else cout << "NO" << "\n";

	return 0;
}
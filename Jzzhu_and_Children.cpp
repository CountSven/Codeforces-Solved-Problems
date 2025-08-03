#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;
	int a[n];

	int idx = -1, mx = 0;

	for ( int i = 1; i <= n; i++ ) {
		cin >> a[i];
		int cur = ceil( ( 1.0 ) * a[i] / m );
		mx = max( mx, cur );
		if ( cur >= mx ) idx = i;
	}

	cout << idx << "\n";

	return 0;
}
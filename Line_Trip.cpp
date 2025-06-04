#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, x;
		cin >> n >> x;
		vector<int> v(n);

		int mx = 0, tmp = 0;

		for ( int i = 0; i < n; i++ ) {
			cin >> v[i];
			int diff = v[i] - tmp;
			tmp = v[i];
			mx = max( mx, diff );
		}

		int edge = ( x - v.back() ) * 2;

		int ans = max( mx, edge );

		cout << ans << "\n";
	}

	return 0;
}
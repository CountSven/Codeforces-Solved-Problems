#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int l, r, L, R;
		cin >> l >> r;
		cin >> L >> R;

		int cnt = 0;

		for ( int i = 1; i < 100; i++ ) {
			if ( l <= i && i <= r && L <= i+1 && i+1 <= R ) cnt++;
			else if ( L <= i && i <= R && l <= i+1 && i+1 <= r ) cnt++;
		}

		int res = max( 1, cnt );

		cout << res << "\n";
	}

	return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, d;
	cin >> n >> d;

	int cnt = 0;

	for ( int i = 1; i <= n; i++ ) {
		if ( i != 1 ) {
			d -= 10;
			cnt += 2;
		}

		int x;
		cin >> x;
		d -= x;
	}

	int tot = cnt + ( d / 5 );

	if ( d < 0 ) cout << -1 << "\n";
	else cout << tot << "\n";

	return 0;
}
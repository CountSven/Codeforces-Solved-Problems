#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int q;
	cin >> q;

	while ( q-- ) {
		int c, m, x;
		cin >> c >> m >> x;

		int cnt = min( { c, m, x } );

		c -= cnt;
		m -= cnt;

		cnt += ( min ( min( c, m ), ( c + m ) / 3 ) );

		cout << cnt << "\n";
	}

	return 0;
}
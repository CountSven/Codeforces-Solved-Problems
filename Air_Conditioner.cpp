#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int q;
	cin >> q;

	while ( q-- ) {
		int n, m;
		cin >> n >> m;

		int last = 0, s = m, e = m, f = 0;

		while ( n-- ) {
			int t, l, h;
			cin >> t >> l >> h;

			int cur = t - last;

			s -= cur;
			e += cur;

			s = max( s, l );
			e = min( e, h );

			last = t;

			if ( s > e ) f = 1;
		}

		if ( !f ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;
}
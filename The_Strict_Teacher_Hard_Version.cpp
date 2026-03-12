#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, m, q;
		cin >> n >> m >> q;
		int b[m];

		for ( int i = 0; i < m; i++ ) cin >> b[i];

		sort( b, b+m );

		while ( q-- ) {
			int a;
			cin >> a;

			int posL = lower_bound( b, b+m, a ) - b;
			posL--;

			if ( posL < 0 ) posL++;

			int posH = upper_bound( b, b+m, a ) - b;

			if ( posH >= m ) posH--;

			// cout << posL << " " << posH << "\n";

			if ( a < b[posL] && a < b[posH] ) cout << min( b[posL], b[posH] ) - 1 << "\n";
			else if ( a > b[posL] && a > b[posH] ) cout << n - max( b[posL], b[posH] ) << "\n";
			else cout << ( b[posH] - b[posL] ) / 2 << "\n";
		}
	}

	return 0;
}
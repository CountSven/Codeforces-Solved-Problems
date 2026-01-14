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
		int a[n];

		int cntOd = 0, cntEv = 0;

		for ( int i = 0; i < n; i++ ) {
			cin >> a[i];

			if ( a[i] % 2 ) cntOd++;
			else cntEv++;
		}

		int req = 0, f = 0;

		if ( !cntOd ) f = 1;
		else {
			req = 1;
			cntOd--;
		}

		while ( req < x && !f ) {
			int cur = x - req;

			if ( cur >= 2 ) {
				if ( cntOd >= 2 ) {
					req += 2;
					cntOd -= 2;
				}
				else if ( cntEv ) {
					req++;
					cntEv--;
				}
				else f = 1;
			}
			else {
				if ( cntEv ) {
					req++;
					cntEv--;
				}
				else f = 1;
			}

			if ( f ) break;
		}

		if ( req == x && !f ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;
}
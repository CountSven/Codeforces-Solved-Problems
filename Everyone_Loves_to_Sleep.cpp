#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, h, m;
		cin >> n >> h >> m;

		int t = ( h * 60 ) + m;

		int mnT = 24 * 60;

		while ( n-- ) {
			int hN, mN;
			cin >> hN >> mN;

			int tN = ( ( hN * 60 ) + mN ) - t;

			if ( tN < 0 ) tN += ( 24 * 60 );

			mnT = min( mnT, tN );
		}

		cout << mnT / 60 << " " << mnT % 60 << "\n";
	}

	return 0;
}
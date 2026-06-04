#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int m, s;
	cin >> m >> s;

	if ( !s && m == 1 ) cout << 0 << " " << 0 << "\n";
	else if ( !s || ( s > ( 9 * m ) ) ) cout << -1 << " " << -1 << "\n";
	else {
		vector<int> mn( m, 0 ), mx( m, 0 );

		mn[0] = 1;
		mx[0] = 1;

		int mnSum = 1, mxSum = 1;	

		for ( int i = m-1; i >= 0; i-- ) {
			int cur;
			if ( !i ) cur = min( 8, s - mnSum );
			else cur = min( 9, s - mnSum );
			mn[i] += cur;
			mnSum += cur;
		}

		for ( int i = 0; i < m; i++ ) {
			int cur;
			if ( !i ) cur = min( 8, s - mxSum );
			else cur = min( 9, s - mxSum );
			mx[i] += cur;
			mxSum += cur;
		}

		for ( auto u : mn ) cout << u;
		cout << " ";
		for ( auto u : mx ) cout << u;
		cout << "\n";
	}

	return 0;
}
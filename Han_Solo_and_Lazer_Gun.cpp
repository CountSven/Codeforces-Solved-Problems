#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, x, y;
	cin >> n >> x >> y;

	vector<pair<int, int>> v;

	int lr = 0, ud = 0;

	for ( int i = 0; i < n; i++ ) {
		int xx, yy;
		cin >> xx >> yy;
		if ( xx == x ) ud = 1;
		else if ( yy == y ) lr = 1;
		else {
			int f = 0;

			for ( auto [x1, y1] : v ) {
				if ( xx * x1 > 0 && yy * y1 > 0 ) {
					if ( abs( abs(xx) - abs(x1) ) == abs( abs(yy) - abs(y1) ) ) {
						if ( abs( abs(xx) - abs(x) ) == abs( abs(yy) - abs(y) ) ) {
							f = 1;
							break;
						}
					}
				}
			}

			// cout << i << " " << f << "\n";

			if ( !f ) {
				v.push_back( { xx, yy } );
				v.push_back( { -xx, -yy } );
			}
		}
	}

	// cout << v.size() << "\n";

	int res = lr + ud + ( (int)v.size() / 2 );

	cout << res << "\n";

	return  0;
}
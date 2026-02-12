#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, x, y;
		cin >> n >> x >> y;

		int diff = y - x;

		int cur = n - 1;

		while ( diff % cur != 0 ) cur--;

		int req = diff / cur;

		vector<int> v;

		v.push_back( y );
		n--;

		int now = y - req;

		while ( now >= 1 && n > 0 ) {
			v.push_back( now );
			now -= req;
			n--;
		}

		if ( n ) {
			int last = y + req;

			v.push_back( last );
			n--;

			while ( n-- ) v.push_back( v.back() + req );
		}

		for ( auto u : v ) cout << u << " ";
		cout << "\n";
	}

	return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, l, r;
		cin >> n >> l >> r;

		vector<int> v;

		int f = 0;

		for ( int i = 1; i <= n; i++ ) {
			int div = l / i;
			int mult = i * div;

			// cout << div << " " << mult << "\n";

			while ( mult < l )  mult = i * div++;
			v.push_back( mult );
			// cout << mult << "\n";

			if ( mult > r ) {
				f = 1;
				break;
			}
		}

		if ( f ) cout << "NO" << "\n";
		else {
			cout << "YES" << "\n";

			// for ( int i = 0; i < (int)v.size(); i++ ) cout << __gcd( i+1, v[i] ) << " ";
			// cout << "\n";

			for ( auto u : v ) cout << u << " ";
			cout << "\n";
		}
	}

	return 0;
}
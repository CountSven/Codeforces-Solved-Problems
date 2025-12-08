#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n;
		cin >> n;
		vector<int> v(n), div;

		long long mx = -1e18, mn = 1e18;

		for ( int i = 0; i < n; i++ ) {
			cin >> v[i];
			mn = min( mn, v[i] * 1LL );
			mx = max( mx, v[i] * 1LL );
		}

		long long res = mx - mn;

		for ( int i = 1; i <= sqrt( n ); i++ ) {
			if ( n % i == 0 && n / i != i ) {
				div.push_back( i );
				div.push_back( n / i );
			}
			else if ( n % i == 0 && n / i == i ) div.push_back( n / i );
		}

		// for ( auto u : div ) cout << u << " ";
		// cout << "\n";

		if ( n == 1 ) cout << 0 << "\n";
		else if ( n == 2 ) cout << res << "\n";
		else {
			if ( (int)div.size() == 2 ) cout << res << "\n";
			else {
				for ( int i = 2; i < (int)div.size(); i++ ) {
					int cnt = 0;

					long long curMx = -1e18, curMn = 1e18, sum = 0;

					for ( int j = 0; j < n; j++ ) {
						sum += v[j];
						cnt++;
						if ( cnt == div[i] ) {
							curMn = min( curMn, sum * 1LL );
							curMx = max( curMx, sum * 1LL );
							cnt = 0;
							sum = 0;
						}
					}

					// cout << curMx << " " << curMn << "\n";

					long long now = curMx - curMn;
					res = max( res, now * 1LL );
				}

				cout << res << "\n";
			}
		}
	}

	return 0;
}
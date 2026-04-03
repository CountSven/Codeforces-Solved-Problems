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
		vector<int> v(n);

		map<pair<int, int>, int> mp;

		for ( int i = 0; i < n; i++ ) {
			cin >> v[i];
			mp[{ v[i] % x, v[i] % y }]++;
		}

		// for ( auto [a, b] : mp ) {
		// 	auto [f, s] = a;
		// 	cout << f << " " << s << " -> " << b << "\n";
		// }

		long long cnt = 0;

		for ( auto [a, b] : mp ) {
			auto [f, s] = a;
			if ( f == 0 || ( 2 * f ) == x ) cnt += ( 1LL * b * ( b - 1 ) ) / 2;
			else if ( 2 * f < x ) {
				int nf = x - f;
				int ns = s;
				if ( mp.find( { nf, ns } ) != mp.end() ) {
					cnt += ( 1LL * mp[{ nf, ns }] * b );
				}
			}
			else break;
		}

		cout << cnt << "\n";
	}

	return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	map<int, vector<int>> mpx, mpy;

	for ( int i = 1; i <= n; i++ ) {
		for ( int j = 1; j <= m; j++ ) {
			int col;
			cin >> col;
			mpx[col].push_back( i );
			mpy[col].push_back( j );
		}
	}

	long long sum = 0;

	for ( auto [u, v] : mpx ) {
		sort( v.begin(), v.end() );

		int sz = v.size();

		for ( int i = 0; i < sz; i++ ) {
			sum += v[i] * 1LL * i;
			sum -= v[i] * 1LL * ( sz - i - 1 );
		}
	}

	for ( auto [u, v] : mpy ) {
		sort( v.begin(), v.end() );

		int sz = v.size();

		for ( int i = 0; i < sz; i++ ) {
			sum += v[i] * 1LL * i;
			sum -= v[i] * 1LL * ( sz - i - 1 );
		}
	}

	cout << sum << "\n";

	return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, m;
		cin >> n >> m;
		vector<pair<long long, vector<long long>>> v(n);

		for ( int i = 0; i < n; i++ ) {
			vector<long long> cur(m);

			long long sum = 0;

			for ( int i = 0; i < m; i++ ) {
				cin >> cur[i];
				sum += cur[i];
			}

			v[i].first = sum;
			v[i].second = cur;
		}

		sort( v.rbegin(), v.rend() );

		vector<long long> now;

		long long curSum = 0;

		for ( auto [x, y] : v ) {
			for ( auto val : y ) {
				if ( now.size() ) now.push_back( now.back() + val );
				else now.push_back( val );
				curSum += now.back();
			}
		}

		cout << curSum << "\n";
	}

	return 0;
}
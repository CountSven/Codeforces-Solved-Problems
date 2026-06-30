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
		vector<pair<int, int>> v(n);

		long long sum = 0;

		for ( int i = 0; i < n; i++ ) {
			cin >> v[i].first;
			v[i].second = i;
			sum += v[i].first;
		}

		sort( v.rbegin(), v.rend() );

		vector<int> idxs;

		int good = v[0].first, last = v[0].first;

		for ( int i = 0; i < n; i++ ) {
			if ( v[i].first == last ) idxs.push_back( v[i].second );
			else if ( sum >= good ) {
				idxs.push_back( v[i].second );
				good = v[i].first;
				last = v[i].first;
			}
			else break;
			sum -= v[i].first;
		}

		sort( idxs.begin(), idxs.end() );

		cout << idxs.size() << "\n";
		for ( auto u : idxs ) cout << u + 1 << " ";
		cout << "\n";
	}   

	return 0;
}
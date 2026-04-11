#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	vector<pair<int, int>> v(n);

	long long sum = 0;

	for ( int i = 0; i < n; i++ ) {
		cin >> v[i].first;
		v[i].second = i;
		sum += v[i].first;
	}

	sort( v.begin(), v.end() );

	sum -= v.back().first;

	vector<int> res;

	for ( int i = 0; i < n-1; i++ ) {
		if ( sum - v[i].first == v.back().first ) res.push_back( v[i].second );
	}

	if ( sum - v[n-2].first == v[n-2].first ) res.push_back( v.back().second );

	sort( res.begin(), res.end() );

	cout << res.size() << "\n";
	for ( auto u : res ) cout << u + 1 << " ";
	cout << "\n";

	return 0;
}
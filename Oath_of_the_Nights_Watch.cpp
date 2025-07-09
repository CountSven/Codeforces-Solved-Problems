#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	vector<int> v(n);

	set<int> s;
	map<int, int> mp;

	for ( int i = 0; i < n; i++ ) {
		cin >> v[i];
		s.insert( v[i] );
		mp[v[i]]++;
	}

	if ( s.size() <= 2 ) cout << 0 << "\n";
	else {
		sort( v.begin(), v.end() );

		int cnt = 0;

		vector<int> r;

		for ( auto u : s ) r.push_back( u );

		for ( int i = 1; i < r.size()-1; i++ ) cnt += mp[r[i]];

		// for ( auto u : mp ) cout << u.first << " " << u.second  << "\n";

		cout << cnt << "\n";
	}

	return 0;
}
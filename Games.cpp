#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<int> v;
	map<int, int> mp;

	while ( n-- ) {
		int h, a;
		cin >> h >> a;
		v.push_back( h );
		mp[a]++;
	}

	int cnt = 0;

	for ( auto u : v ) {
		for ( auto m : mp ) {
			if ( u == m.first ) cnt += m.second;
		}
	}

	cout << cnt << "\n";

	return 0;
}
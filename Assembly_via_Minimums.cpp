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
		int sz = ( n * ( n - 1 ) ) / 2;
		vector<int> v(sz), res;

		map<int, int> mp;

		for ( int i = 0; i < sz; i++ ) {
			cin >> v[i];
			mp[v[i]]++;
		}

		sort( v.rbegin(), v.rend() );

		res.push_back( v[0] );
		res.push_back( v[0] );
		mp[v[0]]--;
		mp[v[0]]--;

		int l = 1;

		while ( (int)res.size() < n ) {
			// cout << v[l] << " " << mp[v[l]] << "\n";
			if ( mp[v[l]] > 0 ) {
				int cur = (int)res.size();
				mp[v[l]] -= cur;
				res.push_back( v[l] );
			}
			else l++;
		}

		for ( auto u : res ) cout << u << " ";
		cout << "\n";
	}

	return 0;
}
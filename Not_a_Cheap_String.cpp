#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	map<char, int> mp;

	int i = 1;

	for ( char c = 'a'; c <= 'z'; c++ ) mp[c] = i++;

	int t;
	cin >> t;

	while ( t-- ) {
		string s;
		cin >> s;
		int p;
		cin >> p;

		int n = s.size();

		vector<pair<char, int>> v(n);

		for ( int i = 0; i < n; i++ ) {
			v[i].first = s[i];
			v[i].second = i;
		}

		sort( v.begin(), v.end() );

		// for ( auto u : v ) cout << u.first << " " << u.second << "\n";
		// cout << "\n";

		long long sum = 0;

		vector<int> idx;

		for ( auto u : v ) {
			if ( sum + mp[u.first] < p ) {
				sum += mp[u.first];
				idx.push_back( u.second );
			}
			else if ( sum + mp[u.first] == p ) {
				sum += mp[u.first];
				idx.push_back( u.second );
				break;
			}
		}

		sort( idx.begin(), idx.end() );

		// for ( auto u : idx ) cout << u << " ";
		// cout << "\n";

		// cout << sum << "\n";
		for ( int i = 0; i < idx.size(); i++ ) cout << s[idx[i]];
		cout << "\n";
	}

	return 0;
}
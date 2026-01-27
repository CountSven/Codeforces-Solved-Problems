#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;

	map<char, int> mp;

	for ( int i = 0; i < k; i++ ) {
		char c;
		cin >> c;
		mp[c] = 1;
	}

	vector<long long> v;

	int cur = 0;
		
	for ( int i = 0; i < n; i++ ) {
		if ( mp.find( s[i] ) != mp.end() ) cur++;
		else {
			v.push_back( cur );
			cur = 0;
		}
	}

	v.push_back( cur );

	// for ( auto u : v ) cout << u << " ";
	// cout << "\n";

	long long cnt = 0;

	for ( int i = 0; i < (int)v.size(); i++ ) cnt += ( 1LL * ( v[i] * ( v[i] + 1 ) ) / 2 );

	cout << cnt << "\n";
		
	return 0;
}
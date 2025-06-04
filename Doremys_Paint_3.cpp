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
		int a[n];

		map<int, int> mp;

		for ( int i = 0; i < n; i++ ) {
			cin >> a[i];
			mp[a[i]]++;
		}
		
		vector<int> v;

		for ( auto u : mp ) {
			v.push_back( u.second );
		}

		if ( mp.size() == 1 ) cout << "YES" << "\n";
		else if ( mp.size() == 2 && ( abs( v.back() - v.front() ) <= 1 ) ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;
}
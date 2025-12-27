#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	vector<int> v(n);

	map<int, int> mp;

	for ( int i = 0; i < n; i++ ) {
		cin >> v[i];
		mp[v[i]]++;
	}

	sort( v.rbegin(), v.rend() );

	cout << v[0] << " ";

	int sec = 0;

	for ( int i = 1; i < n; i++ ) {
		if ( v[0] % v[i] ) {
			sec = v[i];
			break;
		}
	}

	if ( !sec ) {
		int mx = 1, val = 1;

		for ( auto u : mp ) {
			mx = max( mx, u.second );

			if ( u.second == mx ) val = max( val, u.first );
		}

		cout << val << "\n";
	}
	else cout << sec << "\n";

	return 0;
}
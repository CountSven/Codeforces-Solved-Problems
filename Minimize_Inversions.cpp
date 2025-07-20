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

		for ( int i = 0; i < n; i++ ) cin >> v[i].first;
		for ( int i = 0; i < n; i++ ) cin >> v[i].second;

		sort( v.begin(), v.end() );

		for ( int i = 0; i < n; i++ ) cout << v[i].first << " ";
		cout << "\n";
	
		for ( int i = 0; i < n; i++ ) cout << v[i].second << " ";
		cout << "\n";
	}

	return 0;
}
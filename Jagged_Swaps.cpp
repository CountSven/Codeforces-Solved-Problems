#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ){
		int n;
		cin >> n;
		int a[n], b[n];

		map<int, int> mp;

		for ( int i = 1; i <= n; i++ ) mp[i]++;

		for ( int i = 0; i < n; i++ ){
			cin >> a[i];
			b[i] = a[i];
			mp[a[i]]++;
		}

		sort( b, b+n );

		bool isJagged = true;

		if ( b[0] != a[0] ) isJagged = false;

		for ( auto u : mp ){
			if ( u.second != 2 ) isJagged = false;
		}

		// for ( auto u : mp ) cout << u.first << " " << u.second << "\n";

		if ( isJagged ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;
}
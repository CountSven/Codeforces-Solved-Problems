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

		int mx = 1;

		for ( int i = 0; i < n; i++ ) {
			cin >> a[i];
			mp[a[i]]++;

			mx = max( mx, mp[a[i]] );
		}

		if ( (int)mp.size() == mx ) cout << mx-1 << "\n";
		else cout << min( (int)mp.size(), mx ) << "\n";
	}

	return 0;
}
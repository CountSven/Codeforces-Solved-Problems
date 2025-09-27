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

		if ( mp.size() != n ) cout << "YES" << "\n";
		else cout << "NO" << "\n";

		mp.clear();
	}

	return 0;
}
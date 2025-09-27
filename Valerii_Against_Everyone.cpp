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

		bool isPos = false;

		for ( auto u : mp ) {
			if ( u.second >= 2 ) {
				isPos = true;
				break;
			}
		}

		if ( isPos ) cout << "YES" << "\n";
		else cout << "NO" << "\n";

		mp.clear();
	}

	return 0;
}
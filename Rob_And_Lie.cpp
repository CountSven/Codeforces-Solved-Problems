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
		int a[n+1];

		map<long long, int> mp;
 
		for ( int i = 1; i <= n; i++ ) {
			cin >> a[i];

			long long val1 = i - a[i];
			long long val2 = i + a[i];

			if ( val1 == val2 && val1 >= 1 && val1 <= n ) mp[val1]++;
			else {
				if ( val1 >= 1 && val1 <= n ) mp[val1]++; 
				if ( val2 >= 1 && val2 <= n ) mp[val2]++; 
			}
		}

		// for ( auto u : mp ) cout << u.first << " " << u.second << "\n";

		int mx = 0;

		for ( auto u : mp ) mx = max( mx, u.second );

		int mxOcc = 0, idx = 0;

		for ( auto u : mp ) {
			if ( u.second == mx ) {
				idx = u.first;
				mxOcc++;
			}
		}

		if ( mxOcc == 1 ) cout << idx << "\n";
		else cout << -1 << "\n";
	}

	return 0;
}
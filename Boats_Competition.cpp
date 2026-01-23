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
		vector<int> a(n), arr;

		for ( int i = 0; i < n; i++ ) cin >> a[i];

		arr = a;

		map<int, int> mp;

		for ( int i = 0; i+1 < n; i++ ) {
			for ( int j = i+1; j < n; j++ ) {
				mp[a[i]+a[j]]++;
			}
		}

		// for ( auto u : mp ) cout << u.first << " " << u.second << "\n";

		vector<int> val;

		for ( auto u : mp ) val.push_back( u.first );

		// for ( auto u : val ) cout << u << " ";
		// cout << "\n";

		int cnt = 0;

		for ( int i = 0; i < (int)val.size(); i++ ) {
			a = arr;
			int cur = 0;
			for ( int j = 0; j < n; j++ ) {
				if ( a[j] != 1000 ) {
					int need = val[i] - a[j];
					for ( int k = 0; k < n; k++ ) {
						if ( k != j && a[k] == need ) {
							cur++;
							a[j] = 1000;
							a[k] = 1000;
							break;
						}
					}
				}
			}
			cnt = max( cnt, cur );
			// for ( auto u : a ) cout << u << " ";
			// cout << "\n";
		}

		cout << cnt << "\n";
	}

	return 0;
}
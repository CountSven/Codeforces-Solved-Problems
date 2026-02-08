#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, m;
		cin >> n >> m;
		int a[n];

		map<int, int> mp;

		for ( int i = 0; i < n; i++ ) {
			cin >> a[i];
			mp[a[i] % m]++;
		}

		long long res = 0;

		for ( auto u : mp ) {
			if ( u.first == 0 ) res++;
			else if ( u.first == ( m - u.first ) ) res++;
			else {
				if ( mp.find( m - u.first ) != mp.end() && mp[u.first] && mp[m - u.first] ) {
					int val1 = u.second;
					int val2 = mp[m - u.first];
					mp[u.first] = 0;
					mp[m - u.first] = 0;

					if ( abs( val1 - val2 ) <= 1 ) res++;
					else res += abs( val1 - val2 ); 
				}
				else res += u.second;
			}
			// cout << u.first << " " << res << "\n";
		}

		cout << res << "\n";
	}

	return 0;
}
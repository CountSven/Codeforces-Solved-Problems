#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;
	 
	while ( t-- ) {
		int n, m;
		cin >> n >> m;
		int a[m+1];

		for ( int i = 1; i <= m; i++ ) {
			cin >> a[i];
			a[i] = min( a[i], n - 1 );
		}

		sort( a+1, a+m+1 );

		vector<ll> pref(m+1);

		for ( int i = 1; i <= m; i++ ) pref[i] = pref[i-1] + a[i];
	
		ll res = 0;

		for ( int i = 2; i <= m; i++ ) {
			int need = n - a[i];
			int j = lower_bound( a+1, a+m+1, need ) - a;
			if ( j >= i ) continue;
			ll cnt = i - j;
			ll del = need * cnt;
			ll tot = pref[i - 1] - pref[j - 1];
			tot -= del;
			tot += cnt;
			// cout << i << " " << tot << "\n";
			res += tot * 2;
		}

		cout << res << "\n";
	}

	return 0;
}
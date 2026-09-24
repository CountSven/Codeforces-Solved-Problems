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
		int n;
		cin >> n;
		vector<ll> a(n+1), b(n+1), pref(n+1), full(n+2), partial(n+2);

		for ( int i = 1; i <= n; i++ ) cin >> a[i];
		for ( int i = 1; i <= n; i++ ) {
			cin >> b[i];
			pref[i] += pref[i-1] + b[i];
		}

		for ( int i = 1; i <= n; i++ ) {
			ll cur = a[i] + pref[i-1];

			int j = upper_bound( pref.begin(), pref.end(), cur ) - pref.begin();
			
			full[i]++;
			full[j]--;
			
			partial[j] += cur - pref[j-1];
		}

		for ( int i = 1; i <= n; i++ ) full[i] += full[i-1];

		for ( int i = 1; i <= n; i++ ) cout << full[i] * b[i] + partial[i] << " \n"[i == n];	
	}

	return 0;
}
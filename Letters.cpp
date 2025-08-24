#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	long long n, m;
	cin >> n >> m;
	vector<long long> v(n+1), pref(n+1);

	for ( long long i = 1; i <= n; i++ ) cin >> v[i];

	pref[0] = 0;

	for ( long long i = 1; i <= n; i++ ) pref[i] = pref[i-1] + v[i];

	// for ( int i = 1; i <= n; i++ ) cout << pref[i] << " ";
	// cout << "\n";

	while ( m-- ) {
		long long cur;
		cin >> cur;

		long long lbi = lower_bound( pref.begin(), pref.end(), cur ) - pref.begin();
		auto lbv = lower_bound( pref.begin(), pref.end(), cur );
		lbv--;

		cout << lbi << " " << abs(*lbv - cur) << "\n";
	}

	return 0;
}
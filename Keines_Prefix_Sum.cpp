#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	vector<long long> v(n+1), pref(n+1);

	multiset<long long> ms1, ms2;
	ms1.insert(0);

	for ( int i = 1; i <= n; i++ ) {
		cin >> v[i];

		pref[i] = pref[i-1] + v[i];
		ms1.insert( pref[i] );
	}

	int cnt = 0;

	for ( int i = 0; i < n; i++ ) {
		long long cur = pref[i];
		long long sum = pref[n] - pref[i];

		ms1.erase( ms1.find( pref[i] ) );
		ms2.insert( pref[i] );

		long long mn1 = *ms1.begin();
		long long mn2 = *ms2.begin();
		
		if ( mn1 - cur >= 0 && mn2 + sum >= 0 ) cnt++;
	}

	cout << cnt << "\n";

	return 0;
}
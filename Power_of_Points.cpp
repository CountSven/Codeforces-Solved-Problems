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
		vector<ll> x(n), v;

		map<ll, ll> freq, res;

		for ( int i = 0; i < n; i++ ) {
			cin >> x[i];
			freq[x[i]]++;
			if ( freq[x[i]] == 1 ) v.push_back( x[i] );
		}

		sort( v.begin(), v.end() );

		int sz = v.size();

		vector<ll> pref(sz), suff(sz);

		ll cnt = 0, cur = 0;

		for ( int i = 0; i < sz; i++ ) {
			if ( i ) {
				ll rng = v[i] - 1;
				rng -= v[i-1];
				cur += rng * cnt;
			}
			cnt += freq[v[i]];
			cur += cnt;
			pref[i] = cur;
		}

		cnt = 0, cur = 0;

		for ( int i = sz-1; i >= 0; i-- ) {
			if ( i < sz-1 ) {
				ll rng = v[i+1] - 1;
				rng -= v[i];
				cur += rng * cnt;
			}
			cnt += freq[v[i]];
			cur += cnt;
			suff[i] = cur;
		} 

		// for ( int i = 0; i < sz; i++ ) cout << pref[i] << " \n"[i == sz-1];
		// for ( int i = 0; i < sz; i++ ) cout << suff[i] << " \n"[i == sz-1];
	
		for ( int i = 0; i < sz; i++ ) res[v[i]] = pref[i] + suff[i] - freq[v[i]];
	
		for ( int i = 0; i < n; i++ ) cout << res[x[i]] << " \n"[i == n-1];
	}

	return 0;
}
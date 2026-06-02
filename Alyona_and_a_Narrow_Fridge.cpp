#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	ll n, h;
	cin >> n >> h;

	vector<pair<ll, int>> a(n);

	for ( int i = 0; i < n; i++ ) {
		cin >> a[i].first;
		a[i].second = i;
	}

	sort( a.begin(), a.end() );

	ll l = 0, r = n-1, k = 0;

	while ( l <= r ) {
		ll mid = l + ( r - l ) / 2;

		vector<ll> b;

		for ( int i = 0; i < n; i++ ) {
			if ( a[i].second <= mid ) b.push_back( a[i].first ); 
		}

		ll curH = 0;

		for ( int i = b.size()-1; i >= 0; i -= 2 ) {
			curH += b[i];
			if ( curH > h ) break;
		}

		if ( curH <= h ) {
			k = mid;
			l = mid + 1;
		}
		else r = mid - 1;
	}

	cout << k + 1 << "\n";

	return 0;
}
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	ll n, h;
	cin >> n >> h;

	vector<ll> a(n), b;

	for ( int i = 0; i < n; i++ ) cin >> a[i];

	int k = 1;

	for ( int i = n-1; i >= 0; i-- ) {
		for ( int j = 0; j <= i; j++ ) b.push_back( a[j] );
		sort( b.rbegin(), b.rend() );

		ll curH = 0;

		for ( int j = 0; j <= i; j += 2 ) {
			curH += b[j];
			if ( curH > h ) break;
		}

		if ( curH <= h ) {
			k = i + 1;
			break;
		}
		b.clear();
	}

	cout << k << "\n";

	return 0;
}
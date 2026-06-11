#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	ll x;
	cin >> x;

	vector<ll> divs;

	for ( ll i = 1; ( i * i ) <= x; i++ ) {
		if ( x % i == 0 ) {
			divs.push_back( i );
			if ( ( x / i ) != i ) divs.push_back( x / i );
		}
	}

	sort( divs.begin(), divs.end() );

	ll a = 1, b = x;
	int l = 0, r = (int)divs.size()-1;

	while ( l <= r ) {
		// cout << divs[l] << " " << divs[r] << "\n";
		ll cur = lcm( divs[l], divs[r] );
		if ( cur == x ) a = divs[l], b = divs[r];
		l++;
		r--;
	}

	cout << a << " " << b << "\n";

	return 0;
}
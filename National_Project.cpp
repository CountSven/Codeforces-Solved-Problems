#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll n, g, b;

bool check( ll mid )
{
	ll blocks = mid / ( g + b );
	ll good = blocks * g;
	ll bad = blocks * b;
	ll rem = mid % ( g + b );

	if ( rem > g ) {
		good += g;
		rem -= g;
		bad += rem;
	}
	else good += rem;

	return ( ( good >= ( n + 1 ) / 2 ) && ( good + bad >= n ) );
}

void solve()
{
	cin >> n >> g >> b;

	ll l = 1, r = 2e18, res = 2e18;

	while ( l <= r ) {
		ll mid = l + ( r - l ) / 2;

		if ( check(mid) ) {
			res = mid;
			r = mid - 1;
		}
		else l = mid + 1;
	}

	cout << res << "\n";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) solve();

	return 0;
}
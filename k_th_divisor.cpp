#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	ll n, k;
	cin >> n >> k;

	vector<ll> divs;

	for ( ll i = 1; ( i * i ) <= n; i++ ) {
		if ( n % i == 0 ) {
			divs.push_back( i );
			if ( ( n / i ) != i ) divs.push_back( n / i );
		}
	}

	sort( divs.begin(), divs.end() );

	// cout << divs.size() << "\n";

	if ( k > divs.size() ) cout << -1 << "\n";
	else cout << divs[k - 1] << "\n";

	return 0;
}
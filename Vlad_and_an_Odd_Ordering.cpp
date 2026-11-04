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
		ll n, k;
		cin >> n >> k;

		ll cur = 0;

		for ( ll i = 0; ( 1LL << i ) <= n; i++ ) {
			cur++;
			ll rem = n - ( 1LL << i );
			ll cnt = rem / ( 1LL << ( i + 1 ) );
			// cout << i << " " << rem << " " << cnt << "\n";
			if ( cur + cnt < k ) {
				cur += cnt;
				continue;
			}
			ll need = k - cur;
			// cout << cur << " " << need << "\n";
			ll val = ( 1LL << i ) + ( need * ( 1LL << ( i + 1 ) ) );
			cout << val << "\n";
			break;
		}
	} 

	return 0;
}
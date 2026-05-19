#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	ll a[n];
	ll sum = 0;

	for ( int i = 0; i < n; i++ ) {
		cin >> a[i];
		sum += a[i];
	}

	sort( a, a+n );

	int m;
	cin >> m;

	while ( m-- ) {
		ll x, y;
		cin >> x >> y;

		int idx = upper_bound( a, a+n, x ) - a;
		idx--;
		if ( idx < 0 ) idx++;

		ll cur1 = 0, cur2 = 0;

		cur1 = x - min( x, a[idx] );
		cur1 += y - min( y, sum - a[idx] );
		
		if ( idx + 1 < n ) {
			cur2 = x - min( x, a[idx+1] );
			cur2 += y - min( y, sum - a[idx+1] );
		}
		else cur2 = -1;

		if ( cur2 != -1 ) cout << min( cur1, cur2 ) << "\n";
		else cout << cur1 << "\n";
	} 

	return 0;
}
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll ncr( ll n, ll r )
{
	ll up = 1, down = 1;

	for ( ll i = n; i > n - r; i-- ) up *= i;
	for ( ll i = 1; i <= r; i++ ) down *= i;

	return up / down;
}

ll fact( ll n )
{
	if ( n <= 1 ) return 1;
	return n * fact( n - 1 );
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	ll n;
	cin >> n;

	ll cnt = ncr( n, n / 2 );
	cnt /= 2;

	n /= 2;
	ll res = cnt * fact( n - 1 ) * fact( n - 1 );

	cout << res << "\n";

	return 0;
}
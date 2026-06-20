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
		ll n;
		cin >> n;
		n++;

		ll res = 0;

		for ( ll i = 0; i < 61; i++ ) {
			ll cur = 1LL << i;
			if ( cur > n ) break;
			res += ( n - 1 ) / cur;
		}

		cout << res << "\n";
	} 

	return 0;
}
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	map<ll, ll> mp;

	for ( ll i = 1, x; i <= n; i++ ) {
		cin >> x;
		mp[x - i] += x;
	}

	ll mx = 0;

	for ( auto [x, y] : mp ) mx = max( mx, y );

	cout << mx << "\n"; 

	return 0;
}
#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9+7;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int x, y, n;
	cin >> x >> y >> n;

	vector<long long> v(6);

	v[1] = ( x + mod ) % mod;
	v[2] = ( y + mod ) % mod;
	v[3] = ( ( v[2] - v[1] ) + mod ) % mod;
	v[4] = ( ( v[3] - v[2] ) + mod ) % mod;
	v[5] = ( ( v[4] - v[3] ) + mod ) % mod;
	v[0] = ( ( v[5] - v[4] ) + mod ) % mod;

	cout << v[n % 6] << "\n";

	return 0;
}
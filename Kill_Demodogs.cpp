#include<bits/stdc++.h>
using namespace std;

const long long mod = 1e9+7;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		long long n;
		cin >> n;

		long long res = ( 2022 / 6 ) * n % mod * ( n + 1 ) % mod * ( 4 * n - 1 ) % mod;

		cout << res << "\n";
	}

	return 0;
}
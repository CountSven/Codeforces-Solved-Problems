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
		ll k;
		cin >> k;

		ll res = 0, pw = 1;

		while ( k ) {
			int d = k % 9;
			if ( d >= 4 ) d++;
			res += 1LL * d * pw;
			pw *= 10;
			k /= 9;
		}

		cout << res << "\n";
	}

	return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		long long n;
		cin >> n;

		int pwr = 0;

		long long ans = 0;

		while ( n != 0 ) {
			int cur = n % 10;
			n /= 10;

			ans += cur * pow( 2, pwr );
			pwr++;
		}

		cout << ans << "\n";
	}

	return 0;
}
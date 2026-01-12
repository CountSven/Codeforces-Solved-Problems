#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while (t--) {
		int n, k;
		cin >> n >> k;

		if ( n == k ) cout << n + 1 << "\n";
		else if ( n > k ) cout << k << "\n";
		else {
			int req = k / ( n - 1 );
			int res = k + req;

			if ( res % n == 0 ) res--;

			cout << res << "\n";
		}
	}

	return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		long long a, b, c, d;
		cin >> a >> b >> c >> d;

		long long res = a, mn = min( b, c );

		if ( a ) {
			res += ( mn * 2 );

			b -= mn;
			c -= mn;

			long long mx = b + c + d;

			res += min( a + 1, mx );

			cout << res << "\n";
		}
		else cout << 1 << "\n";
	}

	return 0;
}
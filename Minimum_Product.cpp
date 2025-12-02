#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		long long a, b, x, y, n, res, cur1, cur2, cur3, cur4, cur5, cur6;
		cin >> a >> b >> x >> y >> n;

		cur1 = max( a-n, x );
		cur2 = max( b-n, y );

		// cout << cur1 << " " << cur2 << "\n";

		if ( cur1 > cur2 ) {
			cur3 = n - ( b - cur2 );
			cur4 = max( a-cur3, x );

			res = cur2 * cur4;
		}
		else {
			cur5 = n - ( a - cur1 );
			cur6 = max( b-cur5, y );

			res = cur1 * cur6;
		}

		cout << res << "\n";
	}

	return 0;
}
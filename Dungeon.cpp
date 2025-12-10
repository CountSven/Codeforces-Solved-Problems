#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		long long a, b, c, sum, cur, mn;
		cin >> a >> b >> c;

		sum = a + b + c;

		if ( sum % 9 == 0 ) {
			cur = sum / 9;
			mn = min( a, min( b, c ) );
			// cout << cur << " " << mn << "\n";
			
			if ( mn >= cur ) cout << "YES" << "\n";
			else cout << "NO" << "\n";
		}
		else cout << "NO" << "\n";
	}

	return 0;
}
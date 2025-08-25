#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int a, b;
		cin >> a >> b;
		
		int res = INT_MAX;

		for ( int i = 0; i <= 30; i++ ) {
			if ( b > 1 ) {
				int cur = i;
				int c = a;

				while ( c > 0 ) {
					c /= b;
					cur++;
				}

				res = min( res, cur );
			}

			b++;
		}

		cout << res << "\n";
	}

	return 0;
}
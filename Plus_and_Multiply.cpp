#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, a, b;
		cin >> n >> a >> b;

		if ( b == 1 ) cout << "Yes" << "\n";
		else if ( a == 1 ) {
			if ( ( n - 1 ) % b ) cout << "No" << "\n";
			else cout << "Yes" << "\n";
		}
		else {
			long long cur = 1, f = 0;

			while ( cur <= n ) {
				if ( ( ( n - cur ) % b ) == 0 ) {
					f = 1;
					break;
				}
				cur *= 1LL * a;
			}

			if ( f ) cout << "Yes" << "\n";
			else cout << "No" << "\n";
		}
	}

	return 0;
}
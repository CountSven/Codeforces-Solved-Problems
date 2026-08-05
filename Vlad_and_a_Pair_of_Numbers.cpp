#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int x;
		cin >> x;

		if ( x % 2 ) cout << -1 << "\n";
		else {
			long long a = x, b = 0, need = x / 2;

			for ( int i = 30; i >= 0; i-- ) {
				if ( ( x >> i ) & 1 ) continue;
				long long cur = 1LL << i;
				if ( need >= cur ) {
					a += cur;
					b += cur;
					need -= cur;
				}
			}

			if ( need ) cout << -1 << "\n";
			else cout << a << " " << b << "\n";
		}
	}

	return 0;
}
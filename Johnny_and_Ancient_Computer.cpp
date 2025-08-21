#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		long long a, b;
		cin >> a >> b;

		long long cnt = 0;

		if ( a == b ) cout << 0 << "\n";
		else {
			if ( a > b ) swap( a, b );

			while ( a < b ) {
				if ( a * 8 <= b ) a *= 8;
				else if ( a * 4 <= b ) a *= 4;
				else a *= 2;
				cnt++;
			}

			if ( a == b ) cout << cnt << "\n";
			else cout << -1 << "\n";
		}
	}

	return 0;
}
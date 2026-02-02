#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		long long a, k, itr = 1, f = 0;
		cin >> a >> k;

		while ( itr < k ) {
			long long tmp = a, mn = 2e18, mx = 0;

			while ( tmp != 0 ) {
				if ( tmp % 10 == 0 ) f = 1;
				mn = min( mn, tmp % 10 );
				mx = max( mx, tmp % 10 );
				tmp /= 10;
			}

			a += ( mx * mn );
			itr++;
			if ( f ) break;
		}

		cout << a << "\n";
	}

	return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		long long n, cost = 0;
		cin >> n;

		while ( n ) {
			long long cur = log ( n ) / log ( 3 );

			if ( pow( 3, cur + 1 ) == n ) cur++;

			cost += pow( 3, cur + 1 ) + cur * pow( 3, cur - 1 );

			cur = pow( 3, cur );

			n -= cur;
		}

		cout << cost << "\n";
	}

	return 0;
}
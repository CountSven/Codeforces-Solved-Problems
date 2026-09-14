#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		string n;
		int s;
		cin >> n >> s;

		int sum = 0;

		for ( char c : n ) sum += c - '0';

		if ( sum <= s ) cout << 0 << "\n";
		else {
			string r = '0' + n;

			int f = 1, i = r.size() - 1;

			while ( i >= 0 ) {
				if ( f + sum <= s ) {
					while ( r[i] == '9' ) r[i--] = '0';
					r[i]++;
					break;
				}
				sum -= r[i] - '0';
				r[i--] = '0';
			}

			// cout << r << "\n";

			long long val = stoll( r ), cur = stoll( n );

			cout << val - cur << "\n"; 
		}
	}

	return 0;
}
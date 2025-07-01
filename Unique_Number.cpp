#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n;
		cin >> n;

		if ( n < 10 ) cout << n << "\n";
		else if ( n > 45 ) cout << -1 << "\n";
		else {
			int sum = 0;

			string s;

			int dig = 9;

			while ( sum != n ) {
				if ( dig + sum <= n ) {
					s += dig + '0';
					sum += dig;
				}
				dig--;
			}

			reverse( s.begin(), s.end() );

			cout << s << "\n";
		}
	}

	return 0;
}
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
		string s;
		cin >> n >> s;

		s = '#' + s;

		int ptr = 0;

		for ( int i = 1; i <= n; i++ ) {
			if ( s[i] == '0' ) {
				ptr = i;
				break;
			}
		}

		auto show = [&]( int a, int b, int c, int d ) {
			cout << a << " " << b << " " << c << " " << d << "\n";
		};

		if ( !ptr ) {
			if ( n % 2 ) show( 1, ( n + 1 ) / 2, ( n + 1 ) / 2, n );
			else show( 1, n / 2, ( n / 2 ) + 1, n );
		}
		else {
			if ( ptr <= ( n + 1 ) / 2 ) show( ptr, n, ptr + 1, n );
			else show( 1, ptr, 1, ptr - 1 );
		}
	}

	return 0;
}
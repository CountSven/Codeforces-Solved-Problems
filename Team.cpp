#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	if ( n - m > 1 ) cout << -1 << "\n";
	else if ( m > ( ( 2 * n ) + 2 ) ) cout << -1 << "\n";
	else {
		string s = "";
		if ( n >= m ) {
			while ( 1 ) {
				s += '0';
				if ( s.size() == ( n + m ) ) break;
				s += '1';
				if ( s.size() == ( n + m ) ) break;
			}
		}
		else {
			while ( n > 0 || m > 0 ) {
				if ( m && !n ) {
					while ( m-- ) s += '1'; 
				}
				else if ( m >= ( 2 * n ) ) {
					s += "110";
					m -= 2;
					n -= 1;
				}
				else {
					if ( m ) {
						s += '1';
						m--;
					}
					if ( n ) {
						s += '0';
						n--;
					}
				}
			}
		}

		cout << s << "\n";
	}

	return 0;
}
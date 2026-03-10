#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int a, b;
	string s;
	cin >> a >> b >> s;

	if ( a % 2 && b % 2 ) {
		cout << -1 << "\n";
		return;
	}

	int n = a + b;

	for ( int i = 0; i < ( n / 2 ); i++ ) {
		if ( s[i] != '?' && s[n-i-1] != '?' && s[i] != s[n-i-1] ) {
			cout << -1 << "\n";
			return;
		}
	}

	for ( int i = 0; i < n; i++ ) {
		if ( s[i] == '0' ) a--;
		else if ( s[i] == '1' ) b--;
	}

	for ( int i = 0; i < ( n / 2 ); i++ ) {
		if ( s[i] == '?' && s[n-i-1] == '0' ) {
			s[i] = '0';
			a--;
		}
		else if ( s[i] == '?' && s[n-i-1] == '1' ) {
			s[i] = '1';
			b--;
		}
		else if ( s[i] == '0' && s[n-i-1] == '?' ) {
			s[n-i-1] = '0';
			a--;
		}
		else if ( s[i] == '1' && s[n-i-1] == '?' ) {
			s[n-i-1] = '1';
			b--;
		}
	}

	for ( int i = 0; i < ( n / 2 ); i++ ) {
		if ( s[i] == '?' && s[n-i-1] == '?' ) {
			if ( a >= b ) {
				s[i] = '0';
				s[n-i-1] = '0';
				a -= 2;
			}
			else {
				s[i] = '1';
				s[n-i-1] = '1';
				b -= 2;
			}
		}
	}

	if ( n % 2 ) {
		if ( s[n/2] == '?' ) {
			if ( a ) {
				s[n/2] = '0';
				a--;
			}
			else {
				s[n/2] = '1';
				b--;
			}
		}
	}

	if ( a == 0 && b == 0 ) cout << s << "\n";
	else cout << -1 << "\n";

	return;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) solve();

	return 0;
}
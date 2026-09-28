#include<bits/stdc++.h>
using namespace std;

void solve()
{
	string s, r;
	int x, n;
	cin >> s >> x;

	n = s.size();
	r = string( n, '#' );

	for ( int i = 0; i < n; i++ ) {
		if ( s[i] == '0' ) {
			if ( i - x >= 0 ) r[i-x] = '0';
			if ( i + x < n ) r[i+x] = '0';
 		}
	}

	for ( int i = 0; i < n; i++ ) {
		if ( s[i] == '1' ) {
			int f = 0;
			if ( i - x >= 0 && r[i-x] != '0' ) {
				r[i-x] = '1';
				f = 1;
			}
			if ( i + x < n && r[i+x] != '0' ) {
				r[i+x] = '1';
				f = 1;
			}
			if ( !f ) {
				cout << -1 << "\n";
				return;
			}
		}
	}

	for ( auto c : r ) {
		if ( c == '#' ) cout << '1';
		else cout << c;
	}
	cout << "\n";
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
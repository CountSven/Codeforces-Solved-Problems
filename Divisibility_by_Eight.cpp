#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<string> v;

	for ( int i = 1; i <= 150; i++ ) {
		int cur = 8 * i;
		if ( cur < 1000 ) v.push_back( to_string( cur ) );
		else break;
	}

	// cout << v.size() << "\n";

	string s;
	cin >> s;

	int cnt_z = count( s.begin(), s.end(), '0' );

	if ( cnt_z ) {
		cout << "YES" << "\n";
		cout << 0 << "\n";
	}
	else {
		for ( auto u : v ) {
			int sz = u.size(), j = 0;
			for ( char c : s ) {
				if ( c == u[j] ) j++;
				if ( j == sz ) break;
			}
			if ( j == sz ) {
				cout << "YES" << "\n";
				cout << u << "\n";
				return 0;
			}
		}
		cout << "NO" << "\n";
	}

	return 0;
}
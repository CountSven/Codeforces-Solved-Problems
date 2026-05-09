#include<bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<string> v(64);

	for ( ll i = 0; i < 64; i++ ) {
		ll cur = ( 1LL << i );
		v[i] = to_string( cur );
	}

	// for ( auto u : v ) cout << u << "\n";

	int t;
	cin >> t;

	while ( t-- ) {
		string s;
		cin >> s;

		int n = s.size();
		int mn = n + 1;

		for ( auto x : v ) {
			int i = 0, j = 0, m = x.size(), cost = 0;

			while ( i < n && j < m ) {
				if ( s[i] == x[j] ) {
					i++;
					j++;
				}
				else {
					cost++;
					i++;
				}
			}			
			cost += ( n - i ) + ( m - j );

			mn = min( mn, cost );		
		}

		cout << mn << "\n";
	}

	return 0;
}
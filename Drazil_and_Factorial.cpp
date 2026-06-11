#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	map<int, ll> mp, opt;

	int fact = 1;

	for ( int i = 2; i <= 9; i++ ) {
		fact *= i;
		mp[i] = fact;
	}

	// for ( auto [x, y] : mp ) cout << x << " " << y << "\n";

	for ( auto [x, y] : mp ) {
		ll res = y;
		ll mx = x;
		for ( ll i = 0; i <= 5; i++ ) {
			for ( ll j = 0; j <= 5; j++ ) {
				for ( ll k = 0; k <= 5; k++ ) {
					for ( ll l = 0; l <= 5; l++ ) {
						for ( ll m = 0; m <= 5; m++ ) {
							for ( ll n = 0; n <= 5; n++ ) {
								for ( ll o = 0; o <= 5; o++ ) {
									for ( ll p = 0; p <= 5; p++ ) {
										ll cur = 1;
										cur *= pow( mp[2], i );
										if ( cur > res ) break;
										cur *= pow( mp[3], j );
										if ( cur > res ) break;
										cur *= pow( mp[4], k );
										if ( cur > res ) break;
										cur *= pow( mp[5], l );
										if ( cur > res ) break;
										cur *= pow( mp[6], m );
										if ( cur > res ) break;
										cur *= pow( mp[7], n );
										if ( cur > res ) break;
										cur *= pow( mp[8], o );
										if ( cur > res ) break;
										cur *= pow( mp[9], p );
										if ( cur > res ) break;
										if ( cur != res ) continue;
										string s = "";
										for ( int a = 0; a < i; a++ ) s += '2';
										for ( int a = 0; a < j; a++ ) s += '3';
										for ( int a = 0; a < k; a++ ) s += '4';
										for ( int a = 0; a < l; a++ ) s += '5';
										for ( int a = 0; a < m; a++ ) s += '6';
										for ( int a = 0; a < n; a++ ) s += '7';
										for ( int a = 0; a < o; a++ ) s += '8';
										for ( int a = 0; a < p; a++ ) s += '9';
										sort( s.rbegin(), s.rend() );
										if ( !s.size() ) continue;
										ll val = stoll( s );
										mx = max( mx, val );
									}
								}
							}
						}
					}
				}
			}
		}
		opt[x] = mx;
	}

	// for ( auto [x, y] : opt ) cout << x << " " << y << "\n";

	int n;
	string s, ans = "";
	cin >> n >> s;

	for ( int i = 0; i < n; i++ ) {
		if ( s[i] == '0' || s[i] == '1' ) continue;
		int dig = s[i] - '0';
		int x = opt[dig];
		string n = to_string( x );
		ans += n;
	}

	sort( ans.rbegin(), ans.rend() );

	cout << ans << "\n";

	return 0;
}
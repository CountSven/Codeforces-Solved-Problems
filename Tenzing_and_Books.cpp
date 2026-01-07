#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		long long n, x;
		cin >> n >> x;
		long long a[n], b[n], c[n];

		for ( int i = 0; i < n; i++ ) cin >> a[i];
		for ( int i = 0; i < n; i++ ) cin >> b[i];
		for ( int i = 0; i < n; i++ ) cin >> c[i];

		long long cur = 0;
		
		int f = 0, s = 0, t = 0;

		while ( cur != x ) {
			// cout << cur << "   " << f << " " << s << " " << t << "\n";
			if ( f < n && ( x | a[f] ) == x ) {
				cur |= a[f];
				f++;
			}
			else if ( s < n && ( x | b[s] ) == x ) {
				cur |= b[s];
				s++;
			}
			else if ( t < n && ( x | c[t] ) == x ) {
				cur |= c[t];
				t++;
			}
			else break;
		}

		if ( cur == x ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;
}
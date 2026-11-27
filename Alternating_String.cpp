#include<bits/stdc++.h>
using namespace std;

const int N = 2e5+8;

int evPref[N][28], odPref[N][28], evSuff[N][28], odSuff[N][28];

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

		for ( int i = 1; i <= n; i++ ) {
			for ( int j = 0; j < 26; j++ ) {
				odPref[i][j] += odPref[i - 1][j];
				evPref[i][j] += evPref[i - 1][j];
			}
			if ( i % 2 ) odPref[i][s[i] - 'a'] += 1;
			else evPref[i][s[i] - 'a'] += 1;
		}

		for ( int i = n; i >= 1; i-- ) {
			for ( int j = 0; j < 26; j++ ) {
				odSuff[i][j] += odSuff[i + 1][j];
				evSuff[i][j] += evSuff[i + 1][j];
			}
			if ( i % 2 ) odSuff[i][s[i] - 'a'] += 1;
			else evSuff[i][s[i] - 'a'] += 1;
		}

		if ( n % 2 == 0 ) {
			int tot = 0, mx = 0, cur = 0;
			for ( int j = 0; j < 26; j++ ) {
				tot += evPref[n][j];
				mx = max( mx, evPref[n][j] );
			}
			cur += tot - mx;
			tot = 0, mx = 0;
			for ( int j = 0; j < 26; j++ ) {
				tot += odPref[n - 1][j];
				mx = max( mx, odPref[n - 1][j] );
			}
			cur += tot - mx;
			cout << cur << "\n";
		}
		else {
			// cout << s << "\n";
			int cur = 1e9;
			for ( int i = 1; i <= n; i++ ) {
				int evtot = 0, odtot = 0, evmx = 0, odmx = 0;
				for ( int j = 0; j < 26; j++ ) {
					int val = evPref[i - 1][j] + odSuff[i + 1][j];
					evtot += val;
					evmx = max( evmx, val );
					val = odPref[i - 1][j] + evSuff[i + 1][j];
					odtot += val;
					odmx = max( odmx, val );
				}
				int need = evtot - evmx;
				need += ( odtot - odmx );
				// cout << i << " -> " << evtot << " " << evmx << " | " << odtot << " " << odmx << "\n";
				cur = min( cur, need );
			}
			cout << cur + 1 << "\n";
		}

		for ( int i = 0; i <= n+1; i++ ) {
			for ( int j = 0; j < 26; j++ ) {
				evPref[i][j] = odPref[i][j] = evSuff[i][j] = odSuff[i][j] = 0;
			}
		}
	}

	return 0;
}
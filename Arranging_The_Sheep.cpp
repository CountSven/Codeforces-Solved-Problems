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
		char c[n+1];

		for ( int i = 1; i <= n; i++ ) cin >> c[i];

		vector<long long> pref( n+2 ), suff( n+2 );

		int cnt = 0;

		for ( int i = 1; i <= n; i++ ) {
			pref[i] += pref[i-1];
			if ( c[i] == '*' ) cnt++;
			else pref[i] += cnt;
		}

		cnt = 0;

		for ( int i = n; i >= 1; i-- ) {
			suff[i] += suff[i+1];
			if ( c[i] == '*' ) cnt++;
			else suff[i] += cnt; 
		}

		// for ( int i = 1; i <= n; i++ ) cout << pref[i] << " ";
		// cout << "\n";
		// for ( int i = 1; i <= n; i++ ) cout << suff[i] << " ";
		// cout << "\n";

		long long res = 2e12;

		for ( int i = 0; i <= n; i++ ) res = min( res, pref[i] + suff[i+1] );
	
		cout << res << "\n";
	}

	return 0;
}
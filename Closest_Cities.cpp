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
		vector<long long> v(n + 1), pref(n + 2), suf(n + 2);

		for ( int i = 1; i <= n; i++ ) cin >> v[i];

		pref[1] = 1;

		for ( int i = 2; i+1 <= n; i++ )	{
			int a = v[i+1] - v[i];
			int b = v[i] - v[i-1];

			if ( a < b ) pref[i] = 1;
			else pref[i] = a;

			pref[i] += pref[i-1]; 
		}

		suf[n] = 1;

		for ( int i = n-1; i-1 >= 1; i-- ) {
			int a = v[i+1] - v[i];
			int b = v[i] - v[i-1];

			if ( a > b ) suf[i] = 1;
			else suf[i] = b;

			suf[i] += suf[i+1]; 
		}

		int m;
		cin >> m;

		while ( m-- ) {
			int x, y;
			cin >> x >> y;

			if ( x < y ) cout << pref[y-1] - pref[x-1] << "\n";
			else cout << suf[y+1] - suf[x+1] << "\n";
		}
	}

	return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, k;
		cin >> n >> k;
		string s;
		cin >> s;

		int cnt = 0;

		for ( int i = 0; i < k; i++ ) {
			if ( s[i] == 'W' ) cnt++;
		}

		int cur = cnt;

		for ( int i = k, j = 0; i < n; i++, j++ ) {
			if ( s[i] == 'W' ) cnt++;
			if ( s[j] == 'W' ) cnt--;

			cur = min( cur, cnt );
		}

		cout << cur << "\n";
	}

	return 0;
}
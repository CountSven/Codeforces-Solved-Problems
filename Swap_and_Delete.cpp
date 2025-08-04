#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		string s;
		cin >> s;
		int n = s.size();

		int cnt0 = 0, cnt1 = 0;

		for ( int i = 0; i < n; i++ ) {
			if ( s[i] == '0' ) cnt0++;
			else cnt1++;
		}

		int cur0 = 0, cur1 = 0, curtot = 0;

		for ( int i = 1; i <= n; i++ ) {
			if ( s[i-1] == '0' ) cur1++;
			else cur0++;

			if ( cur0 <= cnt0 && cur1 <= cnt1 ) curtot = i;
		}

		cout << n - curtot << "\n";
	}

	return 0;
}
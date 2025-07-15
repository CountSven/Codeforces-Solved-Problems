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

		int cnt = 0, lIdx;

		for ( int i = n-1; i >= 0; i-- ) {
			if ( s[i] == '0' ) cnt++;
			else {
				lIdx = i;
				break;
			}
		}

		for ( int i = 0; i < lIdx; i++ ) {
			if ( s[i] != '0' ) cnt++;
		}

		// cout << n << "\n";
		// cout << lIdx << "\n";
		cout << cnt << "\n";
	}

	return 0;
}
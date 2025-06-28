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
		string s;
		cin >> s;

		int cnt = 1, maxCnt = 1;

		for ( int i = 1; i < n; i++ ) {
			if ( s[i] == s[i-1] ) {
				cnt++;
				maxCnt = max( maxCnt, cnt );
			}
			else cnt = 1;
		}

		cout << maxCnt + 1 << "\n";
	}

	return 0;
}
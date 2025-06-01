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

		int l, r;
		int startIndex = 0;

		for ( int i = 0; i < n; i++ ) {
			if ( startIndex == 0 && s[i] == 'B' ) {
				l = i;
				startIndex = 1;
			}
			if ( startIndex == 1 && s[i] == 'B' ) r = i;
		}

		cout << ( r - l ) + 1 << "\n";
	}

	return 0;
}
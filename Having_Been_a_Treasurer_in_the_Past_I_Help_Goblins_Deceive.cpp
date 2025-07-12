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

		long long cntU = 0, cntD = 0;

		for ( int i = 0; i < n; i++ ) {
			if ( s[i] == '-' ) cntU++;
			else cntD++;
		}

		if ( n < 3 || cntU == 1 ) cout << 0 << "\n";
		else cout << ( cntU / 2 ) * ( ( cntU + 1 ) / 2 ) * cntD << "\n";
	}

	return 0;
}
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

		int cnt0 = 0, cnt1 = 0;

		for ( int i = 0; i < n; i++ ) {
			if ( s[i] == '1' ) cnt1++;
			else if ( s[i-1] != '0' || i == 0 ) cnt0++;
		}

		if ( cnt1 > cnt0 ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;
}
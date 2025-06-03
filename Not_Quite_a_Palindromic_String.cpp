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

		int cnt0 = 0, cnt1 = 0;

		for ( auto u : s ) {
			if ( u == '0' ) cnt0++;
			else cnt1++; 
		}

		while ( k-- ) {
			if ( cnt0 > cnt1 ) cnt0 -= 2;
			else cnt1 -= 2;
		}

		if ( cnt0 == cnt1 ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;
}
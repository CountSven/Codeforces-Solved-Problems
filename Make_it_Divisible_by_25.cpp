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
		
		int mn = INT_MAX;

		for ( int i = n-1; i >= 0; i-- ) {
			if ( s[i] == '0' ) {
				for ( int j = i-1; j >= 0; j-- ) {
					if ( s[j] == '0' || s[j] == '5' ) mn = min( mn, n - j - 2 );
				}
			}
		}

		for ( int i = n-1; i >= 0; i-- ) {
			if ( s[i] == '5' ) {
				for ( int j = i-1; j >= 0; j-- ) {
					if ( s[j] == '2' || s[j] == '7' ) mn = min( mn, n - j - 2 );
				}
			}
		}

		cout << mn << "\n";
	}

	return 0;
}
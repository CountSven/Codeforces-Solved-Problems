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
		char c;
		string s;
		cin >> n >> c >> s;
		s += s;

		int lIdx = -1, mxtot = 0;

		for ( int i = s.size()-1; i >= n; i-- ) {
			if ( s[i] == 'g' ) lIdx = i;
		}

		for ( int i = n-1; i >= 0; i-- ) {
			if ( s[i] == 'g' ) lIdx = i;
			if ( s[i] == c ) mxtot = max( mxtot, lIdx - i );
		}

		cout << mxtot << "\n";
	}

	return 0;
}
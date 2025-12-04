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

		s = 'R' + s;
		s += 'R';

		int mx = 0, last = 1;

		for ( int i = 1; i < (int)s.size(); i++ ) {
			if ( s[i] == 'R' ) {
				mx = max( mx, i+1-last );
				last = i+1;
			}
		}

		cout << mx << "\n";
	}

	return 0;
}
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

		while ( 1 ) {
			bool isFnd = false;

			for ( int i = 0; i < n; i++ ) {
				if ( s[i] == '?' ) {
					if (i - 1 >= 0 && s[i - 1] == 'R') {
						s[i] = 'B';
						isFnd = true;
					}
	                if (i - 1 >= 0 && s[i - 1] == 'B') {
	                	s[i] = 'R';
	                	isFnd = true;
	                }
	                if (i + 1 < n && s[i + 1] == 'R') {
	                	s[i] = 'B';
	                	isFnd = true;
	                }
	                if (i + 1 < n && s[i + 1] == 'B') {
	                	s[i] = 'R';
	                	isFnd = true;
	                }
	            }
			}
			if ( !isFnd ) break;
		}

		if ( s[0] == '?' ) {
			for ( int i = 0; i < n; i++ ) {
				if ( i % 2 ) s[i] = 'R';
				else s[i] = 'B';
			}
		}

		cout << s << "\n";
	}

	return 0;
}
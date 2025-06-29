#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		char c = 'B';

		for ( int i = 0; i < 8; i++ ) {
			string s;
			cin >> s;

			if ( s == "RRRRRRRR" ) c = 'R';
		}

		cout << c << "\n";
	}

	return 0;
}
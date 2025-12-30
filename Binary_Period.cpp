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

		int c0 = count( s.begin(), s.end(), '0' );
		int c1 = count( s.begin(), s.end(), '1' );
		
		if ( ( c0 && !c1 ) || ( !c0 && c1 ) ) cout << s + s << "\n";
		else {
			string cur;

			if ( s[0] == '0' ) {
				cur = "01";

				while ( (int)cur.size() != 2 * (int)s.size() ) cur += "01";
			}
			else {
				cur = "10";

				while ( (int)cur.size() != 2 * (int)s.size() ) cur += "10";
			}

			cout << cur << "\n";
		}
	} 

	return 0;
}
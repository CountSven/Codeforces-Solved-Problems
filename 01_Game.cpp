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

		string s1 = "01", s2 = "10";

		int cnt = 0;

		while ( s.find(s1) != string::npos || s.find(s2) != string::npos ) {
			if ( s.find(s1) != string::npos ) s.erase( s.find(s1), s1.size() );
			else if ( s.find(s2) != string::npos ) s.erase( s.find(s2), s2.size() );
			cnt++;
			// cout << s << "\n";
		}

		// cout << s << "\n";
		// cout << cnt << "\n";

		if ( cnt % 2 ) cout << "DA" << "\n";
		else cout << "NET" << "\n";
	}

	return 0;
}
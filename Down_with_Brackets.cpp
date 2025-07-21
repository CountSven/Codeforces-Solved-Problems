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

		bool isPos = false;

		int cnt = 0;

		for (  int i = 0; i < s.size()-1; i++ ) {
			if ( s[i] == ')' ) cnt++;
			else cnt--;

			if ( cnt == 0 ) {
				isPos = true;
				break;
			}
		}

		if ( isPos ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;
}
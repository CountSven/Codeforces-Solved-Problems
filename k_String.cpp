#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	string s;
	cin >> n >> s;

	map<char, int> mp;

	for ( int i = 0; i < s.size(); i++ ) mp[s[i]]++;

	// for ( auto u : mp ) cout << u.first << " " << u.second << "\n";

	bool isPos = true;

	for ( auto u : mp ) {
		if ( u.second % n != 0 ) {
			isPos = false;
			break;
		}
	}

	if ( !isPos ) cout << -1 << "\n";
	else {
		string cur;

		// int c = 2;
		int tmp = n;

		while ( n-- ) {
			// for ( auto u : mp ) cout << u.first << " " << u.second << "\n";

			// bool isDone = false;

			for ( auto u : mp ) {
				// if ( u.second == 0 ) {
				// 	isDone = true;
				// 	break;
				// }

				int now = u.second / tmp;
				// cout << now << "\n";

				while ( now-- ) cur += u.first;
			}

			// if ( isDone ) break;
		}

		cout << cur << "\n";
	}

	return 0;
}
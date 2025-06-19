#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string s;
	cin >> s;

	char init = 'a';
	int cnt = 0;

	for ( int i = 0; i < s.size(); i++ ) {
		if ( ( abs( ( s[i] - '0' ) - ( init - '0' ) ) ) < ( 26 - abs( ( s[i] - '0' ) - ( init - '0' ) ) ) ) {
			cnt += abs( ( s[i] - '0' ) - ( init - '0' ) );
			// cout << cnt << "\n";
		}
		else {
			cnt +=  26 - abs( ( s[i] - '0' ) - ( init - '0' ) );
			// cout << cnt << "\n";
		}
		init = s[i];
	}

	cout << cnt << "\n";

	return 0;
}
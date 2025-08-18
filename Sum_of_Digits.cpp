#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string s;
	cin >> s;

	int cnt = 0;

	if ( s.size() > 1 ) cnt++;

	while ( s.size() != 1 ) {
		// cout << s << " ";
		int cur = 0;
		for ( int i = 0; i < s.size(); i++ ) cur += ( s[i] - '0' );
		s = to_string( cur );
		if ( s.size() > 1 ) cnt++;
	}

	cout << cnt << "\n";

	return 0;
}
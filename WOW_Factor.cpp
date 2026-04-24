#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string s;
	cin >> s;

	long long l = 0, r = 0, res = 0;

	for ( int i = 1; i < s.size(); i++ ) {
		if ( s[i] == 'v' && s[i-1] == 'v' ) r++;
	}

	for ( int i = 1; i < s.size(); i++ ) {
		if ( s[i] == 'v' && s[i-1] == 'v' ) {
			l++;
			r--;
		}
		else if ( s[i] == 'o' ) res += ( l * r );
	}

	cout << res << "\n";

	return 0;
}
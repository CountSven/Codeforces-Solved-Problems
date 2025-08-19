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

		if ( s.size() % 2 ) cout << "NO" << "\n";
		else if ( s[0] == ')' ) cout << "NO" << "\n";
		else if ( s.back() == '(' ) cout << "NO" << "\n";
		else cout << "YES" << "\n";
	}

	return 0;
}
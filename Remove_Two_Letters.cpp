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

		int res = n - 1;

		for ( int i = 1; i+1 < n; i++ ) {
			if ( s[i-1] == s[i+1] ) res--;
		}

		cout << res << "\n";
	}

	return 0;
}
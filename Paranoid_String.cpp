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
		string s;
		cin >> n >> s;

		long long res = n;

		for ( int i = 1; i < n; i++ ) {
			if ( s[i] != s[i-1] ) res += i;
		}

		cout << res << "\n";
	}

	return 0;
}
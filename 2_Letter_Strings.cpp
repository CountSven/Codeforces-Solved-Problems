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

		map<string, int> mp;

		while ( n-- ) {
			string s;
			cin >> s;
			mp[s]++;
		}

		long long cnt = 0;

		for ( auto [a, b] : mp ) {
			for ( auto [c, d] : mp ) {
				if ( a[0] == c[0] && a[1] != c[1] ) cnt += ( 1LL * b * d );
				else if ( a[0] != c[0] && a[1] == c[1] ) cnt += ( 1LL * b * d );
			}
		}

		cout << cnt / 2 << "\n";
	}

	return 0;
}
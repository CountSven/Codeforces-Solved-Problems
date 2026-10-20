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

		map<pair<int, int>, int> mp;

		int cnt1 = 0, cnt2 = 0;

		for ( char c : s ) {
			if ( c == 'D' ) cnt1++;
			else cnt2++;

			int g = __gcd( cnt1, cnt2 );

			cout << ++mp[{ cnt1 / g, cnt2 / g }] << " ";
		}
		cout << "\n";
	}

	return 0;
}
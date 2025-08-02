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

		map<char, int> mp1, mp2;

		for ( int i = 0; i < n; i++ ) mp1[s[i]]++;

		int cnt = 0;

		for ( int i = 0; i < n-1; i++ ) {
			if ( --mp1[s[i]] == 0 ) mp1.erase( s[i] );
			mp2[s[i]]++;

			cnt = max( cnt, (int)mp1.size() + (int)mp2.size() );
		}

		cout << cnt << "\n";
	}

	return 0;
}
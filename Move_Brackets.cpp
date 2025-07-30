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

		map<char, int> mp;

		int cnt = 0;

		for ( int i = 0; i < n; i++ ) {
			mp[s[i]]++;
			if ( s[i] == ')' && mp[s[i]] > mp['('] ) {
				cnt++;
				mp[s[i]]--;
			}
		}

		cout << cnt << "\n";
	}

	return 0;
}
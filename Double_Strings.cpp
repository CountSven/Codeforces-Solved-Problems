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
		vector<string> v(n);

		map<string, int> mp;

		for ( int i = 0; i < n; i++ ) {
			cin >> v[i];
			mp[v[i]] = 1;
		}

		for ( int i = 0; i < n; i++ ) {
			int cur = 0;

			for ( int j = 1; j <= v[i].size(); j++ ) {
				string s1 = v[i].substr( 0, j );
				string s2 = v[i].substr( j );

				if ( mp[s1] && mp[s2] ) {
					cur = 1;
					break;
				}
			}

			cout << cur;
		}

		cout << "\n";
	}

	return 0;
}
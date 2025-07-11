#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, k;
		cin >> n >> k;
		map<int, int> mp;

		int cnt = 0;

		for ( int i = 0; i < n; i++ ) {
			int val;
			cin >> val;
			if ( mp[k-val] ) {
				cnt++;
				mp[k-val]--;
			}
			else mp[val]++;
		}

		cout << cnt << "\n";
	}

	return 0;
}
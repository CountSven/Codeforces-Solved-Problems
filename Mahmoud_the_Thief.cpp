#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;
	int a[n+1], b[n+1];

	for ( int i = 1; i <= n; i++ ) cin >> a[i];
	for ( int i = 1; i <= n; i++ ) cin >> b[i];

	map<int, int> mp;

	for ( int i = 1; i <= n; i++ ) mp[a[i] % m]++;

	int cnt = 0;

	int curSz = mp.size();

	for ( int i = 1; i <= n; i++ ) {
		if ( curSz <= 1 ) break;

		int cur = b[i];
		int val = a[cur];

		int rem = val % m;
		mp[rem]--;

		if ( mp[rem] == 0 ) mp.erase( rem );

		curSz = mp.size();

		cnt++;
	}

	cout << cnt << "\n";

	return 0;
}
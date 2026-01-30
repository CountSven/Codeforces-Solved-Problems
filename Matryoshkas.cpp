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
		int a[n];

		for ( int i = 0; i < n; i++ ) cin >> a[i];

		sort( a, a+n );

		map<int, int> mp;

		mp[a[0]]++;

		int cnt = 1;

		for ( int i = 1; i < n; i++ ) {
			mp[a[i]]++;

			if ( a[i] - a[i-1] != 1 ) {
				if ( mp.find( a[i] - 1 ) == mp.end() ) cnt++;
				else if ( mp[a[i] - 1] < mp[a[i]] ) cnt++;
			}
		}

		cout << cnt << "\n";
	}

	return 0;
}
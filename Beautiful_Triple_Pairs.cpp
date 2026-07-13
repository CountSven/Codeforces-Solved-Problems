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

		map<tuple<int, int, int>, long long> mp;

		long long cnt = 0;

		for ( int i = 0; i+2 < n; i++ ) {
			cnt += mp[{ a[i], a[i+1], 0 }] + mp[{ a[i], 0, a[i+2] }] + mp[{ 0, a[i+1], a[i+2] }];
			cnt -= 3LL * ( mp[{ a[i], a[i+1], a[i+2] }] );

			mp[{ a[i], a[i+1], 0 }]++;
			mp[{ a[i], 0, a[i+2] }]++;
		 	mp[{ 0, a[i+1], a[i+2] }]++;
		 	mp[{ a[i], a[i+1], a[i+2] }]++;
		}

		cout << cnt << "\n";
	}

	return 0;
}
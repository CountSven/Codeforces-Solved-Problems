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
		int a[n+1];

		map<int, int> mp;

		for ( int i = 1; i <= n; i++ ) {
			cin >> a[i];

			mp[a[i] - i]++;
		}

		long long res = 0;

		for ( auto u : mp ) {
			long long cur = u.second;
			cur--;
			res += ( cur * ( cur + 1 ) ) / 2;
		}

		cout << res << "\n";
	}

	return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n, q;
	cin >> n >> q;
	vector<long long> v(n);

	for ( int i = 0; i < n; i++ ) cin >> v[i];

	sort( v.rbegin(), v.rend() );

	vector<long long> pref(n + 1);

	for ( int i = 0; i < n; i++ ) pref[i+1] = pref[i] + v[i];

	while ( q-- ) {
		int x, y;
		cin >> x >> y;

		long long cur = pref[x] - pref[x - y];

		cout << cur << "\n";
	}

	return 0;
}
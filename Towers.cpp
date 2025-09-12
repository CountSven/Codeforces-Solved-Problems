#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	int a[n];

	map<int, int> mp;

	int mx = 0;

	for ( int i = 0; i < n; i++ ) {
		cin >> a[i];
		mp[a[i]]++;

		mx = max( mx, mp[a[i]] );
	}

	cout << mx << " " << mp.size() << "\n";

	return 0;
}
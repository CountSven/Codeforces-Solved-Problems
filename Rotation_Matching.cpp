#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	vector<int> a(n), b(n);

	map<int, int> mp1, mp2, mp3;

	for ( int i = 0; i < n; i++ ) {
		cin >> a[i];
		a[i]--;
		mp1[a[i]] = i;
	}

	for ( int i = 0; i < n; i++ ) {
		cin >> b[i];
		b[i]--;
		mp2[b[i]] = i;
	}

	int mx = 0;

	for ( int i = 0; i < n; i++ ) {
		int cur = ( mp1[i] - mp2[i] + n ) % n;
		mx = max( mx, ++mp3[cur] );
	}

	// for ( auto [x, y] : mp3 ) cout << x << " " << y << "\n";

	cout << mx << "\n";

	return 0;
}
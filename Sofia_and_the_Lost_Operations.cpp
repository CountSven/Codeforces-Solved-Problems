#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin >> n;
	int a[n], b[n];

	map<int, int> need, have;

	for ( int i = 0; i < n; i++ ) cin >> a[i];
	for ( int i = 0; i < n; i++ ) {
		cin >> b[i];
		if ( a[i] != b[i] ) need[b[i]]++;
	}

	int m;
	cin >> m;
	int d[m];

	for ( int i = 0; i < m; i++ ) {
		cin >> d[i];
		have[d[i]]++;
	}

	for ( auto [x, y] : need ) {
		if ( have[x] < y ) {
			cout << "NO" << "\n";
			return;
		}
	}

	for ( int i = 0; i < n; i++ ) {
		if ( b[i] == d[m-1] ) {
			cout << "YES" << "\n";
			return;
		}
	}

	cout << "NO" << "\n";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) solve();

	return 0;
}
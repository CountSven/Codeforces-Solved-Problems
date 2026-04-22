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

	set<int> must;

	for ( int i = 0; i < n; i++ ) must.insert( b[i] );

	int mxPos = -1;

	for ( int i = 0; i < m; i++ ) {
		if ( must.find( d[i] ) != must.end() ) {
			mxPos = max( mxPos, i );
		}
	}

	// cout << mxPos << "\n";

	if ( mxPos == m-1 ) cout << "YES" << "\n";
	else cout << "NO" << "\n";
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
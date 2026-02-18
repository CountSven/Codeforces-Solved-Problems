#include<bits/stdc++.h>
using namespace std;

int n;
int x[123], y[123], vis[123];

void dfs( int i ) {
	if ( !vis[i] ) {
		vis[i] = 1;

		for ( int j = 0; j < n; j++ ) {
			if ( !vis[j] && ( ( x[j] == x[i] ) || ( y[j] == y[i] ) ) ) dfs( j );
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	cin >> n;

	for ( int i = 0; i < n; i++ ) cin >> x[i] >> y[i];

	int cnt = 0;
	
	for ( int i = 0; i < n; i++ ) {
		if ( !vis[i] ) {
			cnt++;
			dfs( i );
		}
	}

	cout << cnt - 1 << "\n";

	return 0;
}
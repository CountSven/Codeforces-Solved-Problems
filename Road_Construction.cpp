#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;
	vector<int> vis(n+1, 0);

	while ( m-- ) {
		int u, v;
		cin >> u >> v;
		vis[u] = vis[v] = 1;
	}

	if ( n == 1 ) cout << 0 << "\n";
	else {
		cout << n - 1 << "\n";
		for ( int i = 1; i <= n; i++ ) {
			if ( !vis[i] ) {
				for ( int j = 1; j <= n; j++ ) {
					if ( j == i ) continue;
					cout << i << " " << j << "\n";
				}
				return 0;
			}
		}
	}

	return 0;
}
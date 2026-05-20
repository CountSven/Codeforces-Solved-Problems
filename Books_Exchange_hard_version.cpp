#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int q;
	cin >> q;

	while ( q-- ) {
		int n;
		cin >> n;
		vector<int> v(n+1), vis(n+1, 0), cur;

		for ( int i = 1; i <= n; i++ ) cin >> v[i];

		for ( int i = 1; i <= n; i++ ) {
			if ( v[i] == i ) vis[i] = 1;
			if ( !vis[i] ) {
				int tmp = v[i], cnt = 1;
				cur.push_back( i );
				while ( 1 ) {
					if ( tmp == i ) break;
					cnt++;
					cur.push_back( tmp );
					tmp = v[tmp]; 
				}
				// cout << i << " -> ";
				for ( auto u : cur ) {
					// cout << u << " ";
					vis[u] = cnt;
				}
				// cout << "\n";
				cur.clear();
			}
		}

		for ( int i = 1; i <= n; i++ ) cout << vis[i] << " ";
		cout << "\n";
	}

	return 0;
}
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
		vector<pair<int, int>> v;

		int last = -1, cur = 0;

		for ( int i = 0, x; i < n; i++ ) {
			cin >> x;
			if ( x == last ) continue;
			v.push_back( { x, cur++ } );
			last = x;
		}

		sort( v.rbegin(), v.rend() );

		int cnt = 0;
		n = v.size();
	
		vector<int> vis(n, 0);
	
		for ( auto [x, y] : v ) {
			if ( y - 1 >= 0 && vis[y - 1] ) vis[y] = 1;
			else if ( y + 1 < n && vis[y + 1] ) vis[y] = 1;
			else {
				cnt++;
				vis[y] = 1;
			}
		}

		cout << cnt << "\n";
	} 

	return 0;
}
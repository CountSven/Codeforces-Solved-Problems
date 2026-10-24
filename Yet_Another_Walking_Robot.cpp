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
		string s;
		cin >> n >> s;

		int res = 1e9, l, r, x = 0, y = 0;

		map<pair<int, int>, int> last;

		last[{ 0, 0 }] = 0;

		for ( int i = 0; i < n; i++ ) {
			if ( s[i] == 'R' ) x++;
			else if ( s[i] == 'L' ) x--;
			else if ( s[i] == 'U' ) y++;
			else y--;

			if ( last.find( { x, y } ) != last.end() ) {
				int ptr = last[{ x, y }];
				int cur = i - ptr + 1;
				// cout << ptr << " " << i << " -> " << cur << "\n";
				if ( cur < res ) {
					l = ptr;
					r = i;
					res = cur;
				}
			}

			last[{ x, y }] = i + 1;
		}

		if ( res == 1e9 ) cout << -1 << "\n";
		else cout << l + 1 << " " << r + 1 << "\n";
	} 

	return 0;
}
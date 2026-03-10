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
		string s, r = "";
		cin >> n >> s;

		map<char, int> mp;

		for ( int i = 0; i < n; i++ ) mp[s[i]]++;

		// for ( auto [x, y] : mp ) cout << x << " " << y << "\n";
		// cout << "\n";

		priority_queue<pair<int, char>> pq;

		for ( auto [x, y] : mp ) pq.push( { y, x } );

		while ( pq.size() >= 2 ) {
			char c1 = pq.top().second;
			int f = pq.top().first;
			pq.pop();
			char c2 = pq.top().second;
			int s = pq.top().first;
			pq.pop();

			r += c1;
			f--;
			r += c2;
			s--;

			if ( f > 0 ) pq.push( { f, c1 } );
			if ( s > 0 ) pq.push( { s, c2 } );
		}

		if ( pq.size() ) {
			char c = pq.top().second;
			int cur = pq.top().first;
			
			while ( cur-- ) r += c;
		}

		cout << r << "\n";
	}

	return 0;
}
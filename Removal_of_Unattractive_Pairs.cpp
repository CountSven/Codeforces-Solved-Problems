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

		map<char, int> mp;

		for ( int i = 0; i < n; i++ ) mp[s[i]]++;

		// for ( auto [x, y] : mp ) cout << x << " " << y << "\n";
		// cout << "\n";
		
		priority_queue<int> pq;

		for ( auto [x, y] : mp ) pq.push( y );

		while ( pq.size() >= 2 ) {
			int f = pq.top();
			pq.pop();
			int s = pq.top();
			pq.pop();
			f--;
			s--;
			if ( f ) pq.push( f );
			if ( s ) pq.push( s );
		}

		if ( pq.size() ) cout << pq.top() << "\n";
		else cout << 0 << "\n";
	}

	return 0;
}
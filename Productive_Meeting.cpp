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
		priority_queue<pair<int, int>> pq;

		for ( int i = 0, x; i < n; i++ ) {
			cin >> x;
			if ( x ) pq.push( { x, i } );
		}

		vector<pair<int, int>> res;

		while ( (long long)pq.size() >= 2 ) {
			auto [f, id1] = pq.top();
			pq.pop();
			auto [s, id2] = pq.top();
			pq.pop();

			res.push_back( { id1, id2 } );

			f--;
			s--;

			if ( f ) pq.push( { f, id1 } );
			if ( s ) pq.push( { s, id2 } );
		}

		cout << (long long)res.size() << "\n";
		for ( auto [x, y] : res ) cout << x + 1 << " " << y + 1 << "\n"; 
	}

	return 0;
}
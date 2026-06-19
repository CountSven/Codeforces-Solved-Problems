#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, m;
		cin >> n >> m;
		vector<int> freq( n, 0 );

		for ( int i = 0; i < m; i++ ) {
			int x;
			cin >> x;
			x--;
			freq[x]++;
		}

		multiset<int> ms;

		for ( int i = 0; i < n; i++ ) ms.insert( freq[i] );

		// for ( auto u : ms ) cout << u << " ";
		// cout << "\n";

		while ( 1 ) {
			auto l = ms.begin();
			auto r = ms.rbegin();
			int diff = *r - *l;
			if ( diff >= 3 ) {
				int nl = *l + 2;
				int nr = *r - 1;
				ms.erase( ms.find( *l ) );
				ms.erase( ms.find( *r ) );
				ms.insert( nl );
				ms.insert( nr );
			}
			else break;
		}

		cout << *ms.rbegin() << "\n";
	}

	return 0;
}
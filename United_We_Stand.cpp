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
		vector<int> v(n), b, c;

		set<int> s;

		for ( int i = 0; i < n; i++ ) {
			cin >> v[i];
			s.insert( v[i] );
		}

		if ( s.size() == 1 ) cout << -1 << "\n";
		else {
			sort( v.begin(), v.end() );

			int init = v[0];

			for ( int i = 0; i < n; i++ ) {
				if ( v[i] == v[0] ) b.push_back( v[i] );
				else c.push_back( v[i] );
			}

			cout << b.size() << " " << c.size() << "\n";
			for ( auto u : b ) cout << u << " ";
			cout << "\n";
			for ( auto u : c ) cout << u << " ";
			cout << "\n";
		}
	}

	return 0;
}
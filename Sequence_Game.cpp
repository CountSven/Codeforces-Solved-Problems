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
		vector<int> v(n), r;

		for ( int i = 0; i < n; i++ ) cin >> v[i];

		int diff = v.front();
		r.push_back ( diff );

		for ( int i = 1; i < n; i++ ) {
			if ( v[i] < diff ) {
				int diffr = v[i] - 1;
				if ( diffr == 0 ) diffr = 1;
				r.push_back( diffr );
				r.push_back( v[i] );
				diff = v[i];
			}
			else {
				r.push_back( v[i] );
				diff = v[i];
			}
		}

		cout << r.size() << "\n";
		for ( auto u : r ) cout << u << " ";
		cout << "\n";
	}

	return 0;
}
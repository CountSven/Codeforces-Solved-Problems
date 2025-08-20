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
		vector<int> v(n), r(n);

		for ( int i = 0; i < n; i++ ) {
			cin >> v[i];
			r[i] = i + 1;
		}

		for ( int i = 0; i < n-1; i++ ) {
			if ( v[i] == v[i+1] ) swap( r[i], r[i+1] );
		}

		bool isPos = true;

		for ( int i = 0; i < n; i++ ) {
			if ( r[i] == i + 1 ) {
				isPos = false;
				break;
			}
		}

		if ( isPos ) {
			for ( auto u : r ) cout << u << " ";
			cout << "\n";
 		}
 		else cout << -1 << "\n";
 	}

	return 0;
}
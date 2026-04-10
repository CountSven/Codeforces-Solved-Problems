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
		vector<int> v(n), res;

		for ( int i = 0; i < n; i++ ) cin >> v[i];

		res.push_back( v[0] );

		int greater = 0, smaller = 0;
		
		for ( int i = 1; i < n; i++ ) {
			if ( v[i] == v[i-1] ) continue;
			else if ( greater ) {
				if ( v[i] > v[i-1] ) res.pop_back();
				else {
					smaller = 1;
					greater = 0;
				}
			}
			else if ( smaller ) {
				if ( v[i] < v[i-1] ) res.pop_back();
				else {
					greater = 1;
					smaller = 0;
				}
			}
			else {
				if ( v[i] > v[i-1] ) greater = 1;
				else smaller = 1;
			}
			res.push_back( v[i] );
		}

		cout << res.size() << "\n";
		for ( auto u : res ) cout << u << " ";
		cout << "\n";
	}

	return 0;
}
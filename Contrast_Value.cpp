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
		
		int big = 0, small = 0;

		res.push_back( v[0] );

		for ( int i = 1; i < n; i++ ) {
			if ( v[i] < res.back() ) {
				if ( !small ) {
					res.push_back( v[i] );
					small = 1;
				}
				else {
					res.pop_back();
					res.push_back( v[i] );
				}
				big = 0;
			}
			else if ( v[i] > res.back() ) {
				if ( !big ) {
					res.push_back( v[i] );
					big = 1;
				}
				else {
					res.pop_back();
					res.push_back( v[i] );
				}
				small = 0;
			}
		}

		// for ( auto u : res ) cout << u << " ";
		// cout << "\n";

		cout << (int)res.size() << "\n";
	}

	return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int x, k;
		cin >> x >> k;

		vector<int> v;

		if ( x % k ) v.push_back( x );
		else {
			v.push_back( x - 1 );
			v.push_back( 1 );
		}
		
		cout << v.size() << "\n";
		for ( auto u : v ) cout << u << " ";
		cout << "\n"; 
	}

	return 0;
}
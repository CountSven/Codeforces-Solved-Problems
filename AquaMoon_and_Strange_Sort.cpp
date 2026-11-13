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
		vector<int> v1, v2, v;

		for ( int i = 1, x; i <= n; i++ ) {
			cin >> x;
			if ( i % 2 ) v1.push_back( x );
			else v2.push_back( x );
		}

		sort( v1.begin(), v1.end() );
		sort( v2.begin(), v2.end() );

		int i = 0, j = 0;

		while ( i < v1.size() || j < v2.size() ) {
			v.push_back( v1[i++] );
			if ( j < v2.size() ) v.push_back( v2[j++] );
		}

		if ( is_sorted( v.begin(), v.end() ) ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	} 	

	return 0;
}
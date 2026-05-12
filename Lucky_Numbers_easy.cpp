#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<long long> v;

	for ( int i = 2; i <= 10; i += 2 ) {
		for ( int j = 0; j < ( 1 << i ); j++ ) {
			vector<int> cur;
			for ( int k = 0; k < i; k++ ) {
				if ( j & ( 1 << k ) ) cur.push_back( 4 );
				else cur.push_back( 7 );
			}
			int cnt4 = 0, cnt7 = 0;
			string s = "";
			for ( auto x : cur ) {
				if ( x == 4 ) cnt4++;
				else cnt7++;
				s += ( x + '0' );
			}
			// cout << s << "\n";
			if ( cnt4 == cnt7 ) v.push_back( stoll( s ) );
		}
	}

	sort( v.begin(), v.end() );

	// for ( auto u : v ) cout << u << "\n";

	int n;
	cin >> n;
	cout << *( lower_bound( v.begin(), v.end(), n ) ) << "\n";

	return 0;
}
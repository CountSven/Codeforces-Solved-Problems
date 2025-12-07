#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		long long n;
		cin >> n;
		vector<long long> v(n), seg1, seg2;

		for ( long long i = 0; i < n; i++ ) cin >> v[i];

		for ( long long i = 0; i < n; i += 2 ) seg1.push_back( v[i] );	
		for ( long long i = 1; i < n; i += 2 ) seg2.push_back( v[i] );	

		long long val = 0;
		
		for ( long long i = 0; i < n; i++ ) {
			long long div1 = 0, div2 = 0;

			for ( long long j = 0; j < (long long)seg1.size(); j++ ) {
				if ( seg1[j] % v[i] ) div1++;
			}
			for ( long long j = 0; j < (long long)seg2.size(); j++ ) {
				if ( seg2[j] % v[i] ) div2++;
			}
			// cout << div1 << " " << div2 << "\n";

			if ( ( div1 == 0 && div2 == (long long)seg2.size() ) || ( div1 == (long long)seg1.size() && div2 == 0 ) ) {
				val = v[i];
				break;
			}
		}

		if ( !val ) {
			long long g = seg1[0], curDiv = 0;

			for ( long long i = 0; i < (long long)seg1.size(); i++ ) g = __gcd( g, seg1[i] );

			if ( g != 1 ) {
				for ( long long i = 0; i < (long long)seg2.size(); i++ ) {
					if ( seg2[i] % g == 0 ) curDiv++;
				}
			}
			// cout << g << " " << curDiv << "\n";

			if ( g != 1 && curDiv == 0 ) val = g;
		}

		if ( !val ) {
			long long g = seg2[0], curDiv = 0;

			for ( long long i = 0; i < (long long)seg2.size(); i++ ) g = __gcd( g, seg2[i] );

			if ( g != 1 ) {
				for ( long long i = 0; i < (long long)seg1.size(); i++ ) {
					if ( seg1[i] % g == 0 ) curDiv++;
				}
			}
			// cout << g << " " << curDiv << "\n";

			if ( g != 1 && curDiv == 0 ) val = g;
		}

		cout << val << "\n";
	}

	return 0;
}
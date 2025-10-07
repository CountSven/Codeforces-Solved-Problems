#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int k, n;
		cin >> k >> n;
		vector<int> v, r;

		int cnt = 0, st = 0;

		for ( int i = 1; i <= n; i += st ) {
			v.push_back( i );
			st++;
			cnt++;

			if ( cnt == k ) break;
		}

		r = v;

		if ( cnt != k ) {
			for ( int i = v.back()+1; i <= n; i++ ) {
				v.push_back( i );
				cnt++;

				if ( cnt == k ) break;
			}
		}

		if ( cnt != k ) {
			for ( int i = r.size()-2; i > 0; i-- ) {
				for ( int j = r[i]+1; j <= r[i+1]-1; j++ ) {
					 v.push_back( j );
					cnt++;

					if ( cnt == k ) break;
				}

				if ( cnt == k ) break;
			}
		}

		sort( v.begin(), v.end() );

		for ( auto u : v ) cout << u << " ";
		cout << "\n";
	}

	return 0;
}
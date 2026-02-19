#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, m;
		cin >> n >> m;
		vector<int> v(m), seg;

		for ( int i = 0; i < m; i++ ) cin >> v[i];

		sort( v.begin(), v.end() );
	
		seg.push_back( ( v[0] - 1 ) + ( n - v[m-1] )  );

		for ( int i = 1; i < m; i++ ) seg.push_back( v[i] - v[i-1] - 1 );
		
		sort( seg.rbegin(), seg.rend() );

		// for ( auto u : seg ) cout << u << " ";
		// cout << "\n";

		int cnt = 0, dec = 0;

		for ( int i = 0; i < seg.size(); i++ ) {
			seg[i] -= dec;

			if ( seg[i] >= 3 ) {
				cnt += ( seg[i] - 1 );
				dec += 4;
			}
			else if ( seg[i] >= 1 ) {
				cnt++;
				dec += 2;
			}
			else break;
		}

		cout << n - cnt << "\n";
	}

	return 0;
}
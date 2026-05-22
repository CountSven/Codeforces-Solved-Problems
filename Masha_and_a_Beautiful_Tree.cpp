#include<bits/stdc++.h>
using namespace std;

int n, cnt = 0, f = 0;

void divide( int l, int r, vector<int>& v )
{
	if ( l < r ) {
		int mid = l + ( r - l ) / 2;
		int mn = 1e9, mx = 0;

		for ( int i = l; i <= r; i++ ) {
			mn = min( mn, v[i] );
			mx = max( mx, v[i] );
		}

		if ( mx - mn + 1 != r - l + 1 ) {
			f = 1;
			return;
		}

		vector<int> vec1, vec2;
		int vec1pos = 1e9, vec2pos = 1e9;

		for ( int i = l; i <= mid; i++ ) {
			vec1pos = min( vec1pos, v[i] );
			vec1.push_back( v[i] );
		}
		for ( int i = mid+1; i <= r; i++ ) {
			vec2pos = min( vec2pos, v[i] );
			vec2.push_back( v[i] );
		}

		if ( vec1pos != l ) {
			cnt++;
			for ( int i = l, j = 0; i <= mid; i++, j++ ) v[i] = vec2[j];
			for ( int i = mid+1, j = 0; i <= r; i++, j++ ) v[i] = vec1[j];
		}

		// for ( int i = 1; i <= n; i++ ) cout << v[i] << " ";
		// cout << "\n"; 
		// cout << l << " " << r << " " << cnt << "\n";
		divide( l, mid, v );
		divide( mid+1, r, v );
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		cin >> n;
		vector<int> v(n+1);

		for ( int i = 1; i <= n; i++ ) cin >> v[i];

		cnt = 0, f = 0;
		
		divide( 1, n, v );

		if ( f ) cout << -1 << "\n";
		else cout << cnt << "\n";	
	}

	return 0;
}
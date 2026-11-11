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
		vector<int> v;

		for ( int i = 0, x; i < n; i++ ) {
			cin >> x;
			if ( !v.size() || v.back() != x ) v.push_back( x );
		}

		if ( v.size() == 1 ) {
			cout << 0 << " " << 0 << "\n";
			continue;
		}

		if ( v.back() == -1 ) v.push_back( v[v.size()-2] );

		if ( v[0] == -1 ) {
			reverse( v.begin(), v.end() );
			v.push_back( v[v.size()-2] );
			reverse( v.begin(), v.end() );
		}

		int mn = 1e9, mx = 0;

		for ( int i = 1; i+1 < v.size(); i++ ) {
			if ( v[i] == -1 ) {
				mn = min( mn, min( v[i-1], v[i+1] ) );
				mx = max( mx, max( v[i-1], v[i+1] ) );
			}
		}

		int val = ( mn + mx ) / 2;

		for ( int i = 0; i < v.size(); i++ ) {
			if ( v[i] == -1 ) v[i] = val;
		}

		int diff = 0;

		for ( int i = 0; i+1 < v.size(); i++ ) {
			diff = max( diff, abs( v[i+1] - v[i] ) );
			if ( i ) diff = max( diff, abs( v[i] - v[i-1] ) );
		}

		cout << diff << " " << val << "\n";
	}

	return 0;
}
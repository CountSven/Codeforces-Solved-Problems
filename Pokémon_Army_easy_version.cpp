#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, q;
		cin >> n >> q;
		vector<int> v(n);

		for ( int i = 0; i < n; i++ ) cin >> v[i];

		vector<pair<int, int>> peak, bottom;

		for ( int i = 0; i < n; i++ ) {
			if ( !i && i+1 < n && v[i] > v[i+1] ) peak.push_back( { i, v[i] } );
			else if ( i == n-1 && i-1 >= 0 && v[i] > v[i-1] ) peak.push_back( { i, v[i] } );
			else if ( i-1 >= 0 && i+1 < n && v[i] > v[i-1] && v[i] > v[i+1] ) peak.push_back( { i, v[i] } );
			else if ( i-1 >= 0 && i+1 < n && v[i] < v[i-1] && v[i] < v[i+1] ) bottom.push_back( { i, v[i] } );
		}

		// for ( auto [x, y] : peak ) cout << x << " " << y << "\n";
		// cout << "\n";
		// for ( auto [x, y] : bottom ) cout << x << " " << y << "\n";
		// cout << "\n";

		long long sum = 0, l = 0;

		if ( n > 1 ) sum = peak[0].second;
		else sum = v[0]; 

		for ( int i = 1; i < peak.size(); i++ ) {
			sum += peak[i].second;
			while ( bottom[l].first < peak[i-1].first ) l++;
			sum -= bottom[l++].second;
		}

		cout << sum << "\n";
	}

	return 0;
}
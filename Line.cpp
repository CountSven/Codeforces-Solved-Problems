#include<bits/stdc++.h>
using namespace std;

bool cmp( pair<int, int> a, pair<int, int> b ) {
	if ( a.first - a.second > b.first - b.second ) return true;
	return false;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n;
		cin >> n;
		string s;
		cin >> s;

		long long sum = 0;

		vector<pair<int, int>> v(n);

		for ( int i = 0; i < n; i++ ) {
			v[i].first = max( i - 0, n - i - 1 );

			if ( s[i] == 'L' ) {
				sum += ( i - 0 );
				v[i].second = ( i - 0 );
			}
			else {
				sum += ( n - 1 - i );
				v[i].second = ( n - i - 1 );
			}
		}

		sort( v.begin(), v.end(), cmp );

		// for ( auto u : v ) cout << u.first << " " << u.second << "\n";
		// cout << "\n";

		for ( int i = 0; i < n; i++ ) {
			sum -= v[i].second;
			sum += v[i].first;

			cout << sum << " ";
		}

		cout << "\n";
	}

	return 0;
}
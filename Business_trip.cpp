#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int k;
	cin >> k;

	vector<int> v(12);

	int totSum = 0;

	for ( int i = 0; i < 12; i++ ) {
		cin >> v[i];
		totSum += v[i];
	}

	if ( totSum < k ) cout << -1 << "\n";
	else {
		sort( v.rbegin(), v.rend() );

		int sum = 0, cnt = 0;

		while ( sum < k ) {
			for ( int i = 0; i < 12; i++ ) {
				sum += v[i];
				cnt++;
				if ( sum >= k ) break;
			}
		}

		// for ( auto u : v ) cout << u << " ";
		// cout << "\n";

		cout << cnt << "\n";
	}

	return 0;
}
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
		vector<int> v(n+1);
		v[0] = 0;

		for ( int i = 1; i <= n; i++ ) cin >> v[i];

		sort( v.begin(), v.end() );

		// for ( auto u : v ) cout << u << " ";
		// cout << "\n";

		int mx = 1;

		for ( int i = n; i >= 1; i-- ) {
			if ( v[i] <= i ) {
				mx = i+1;
				break;
			}
		}

		cout << mx << "\n";
	}

	return 0;
}
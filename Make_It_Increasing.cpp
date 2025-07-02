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
		vector<int> v(n);

		for ( int i = 0; i < n; i++ ) cin >> v[i];

		reverse( v.begin(), v.end() );

		int cnt = 0;

		for ( int i = 1; i < n; i++ ) {
			if ( v[i] >= v[i-1] ) {
				while ( v[i] >= v[i-1] ) {
					v[i] /= 2;
					cnt++;
					if ( v[i] == 0) break;
				}
			}
			if ( v[i] == 0 && v[i-1] == 0 ) {
				cnt = -1;
				break;
			}
		}

		// for ( auto u : v ) cout << u << " ";
		// cout << "\n";

		cout << cnt << "\n";
	}

	return 0;
}
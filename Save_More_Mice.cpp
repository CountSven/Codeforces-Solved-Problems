#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, k;
		cin >> n >> k;
		vector<int> v(k);

		for ( int i = 0; i < k; i++ ) {
			cin >> v[i];
			v[i] = n - v[i];
		}

		sort( v.begin(), v.end() );

		int cnt = 0, cat = 0;

		for ( int i = 0; i < k; i++ ) {
			if ( n - v[i] > cat ) {
				cnt++;
				cat += v[i];
			}
			else break;
		}

		// for ( auto u : v ) cout << u << " ";
		// cout << "\n";

		cout << cnt << "\n";
	}

	return 0;
}
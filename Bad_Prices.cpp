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

		int cnt = 0, mn = v[0];

		for ( int i = 1; i < n; i++ ) {
			if ( v[i] > mn ) cnt++;

			mn = min( mn, v[i] );
		}

		cout << cnt << "\n";
	}

	return 0;
}
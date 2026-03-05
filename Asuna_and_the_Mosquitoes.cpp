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
		vector<int> v(n), odd, even;

		int mx = 0;

		for ( int i = 0; i < n; i++ ) {
			cin >> v[i];
			mx = max( mx, v[i] );

			if ( v[i] % 2 ) odd.push_back( v[i] );
			else even.push_back( v[i] );
		}

		if ( !odd.size() || !even.size() ) cout << mx << "\n";
		else {
			long long sum = 0;

			for ( int i = 0; i < (int)even.size(); i++ ) sum += even[i];

			for ( int i = 0; i < (int)odd.size(); i++ ) {
				if ( i ) sum += odd[i] - 1;
				else sum += odd[i];
			}

			cout << sum << "\n";
		}
	}

	return 0;
}
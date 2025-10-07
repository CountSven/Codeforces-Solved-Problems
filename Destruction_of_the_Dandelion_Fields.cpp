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
		int a[n];

		long long evSum = 0, res = 0;
		vector<int> v;

		for ( int i = 0; i < n; i++ ) {
			cin >> a[i];

			if ( a[i] % 2 ) v.push_back( a[i] );
			else evSum += a[i];
		}

		if ( v.size() == 0 ) cout << 0 << "\n";
		else {
			sort( v.rbegin(), v.rend() );

			res = evSum;

			for ( int i = 0; i < ( int )( ( v.size()+1 ) / 2 ); i++ ) res += v[i];

			cout << res << "\n";
		}
	}

	return 0;
}
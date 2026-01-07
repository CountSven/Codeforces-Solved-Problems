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
		long long a[n];

		for ( int i = 0; i < n; i++ ) cin >> a[i];

		long long res = a[0];
		
		for ( int i = 1; i < n; i++ ) {
			long long cur = ceil( (1.0) * ( res + 1 ) / a[i] );
			res = cur * a[i];	
		}
	
		cout << res << "\n";
	}

	return 0;
}
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
		
		long long res1 = 0, res2 = 0;

		for ( int i = 0; i < n; i++ ) {
			long long x;
			cin >> x;
			if ( x > 0 ) res1 += x;
			else res2 += llabs( x );
			res2 = max( res2, res1 );
		}

		cout << res2 << "\n";
	}

	return 0;
}
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

		vector<int> v( n+1 );

		int l = 1, r = n, init = 1;

		while ( l <= r ) {
			if ( init % 2 ) {
				for ( int i = init; i <= n; i += k ) v[i] = l++;
			}
			else {
				for ( int i = init; i <= n; i += k ) v[i] = r--;
			}
			init++;
		}

		for ( int i = 1; i <= n; i++ ) cout << v[i] << " \n"[i == n];
	}

	return 0;
}
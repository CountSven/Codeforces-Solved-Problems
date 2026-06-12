#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int a, b, k;
		cin >> a >> b >> k;
		vector<int> v1( k+1 ), v2( k+1 ), boy( a+1, 0 ), girl( b+1, 0 );

		for ( int i = 1; i <= k; i++ ) cin >> v1[i];
		for ( int i = 1; i <= k; i++ ) cin >> v2[i];

		for ( int i = 1; i <= k; i++ ) {
			boy[v1[i]]++;
			girl[v2[i]]++;
		}

		long long cnt = 0;

		for ( int i = 1; i <= k; i++ ) {
			long long cur = k-1;
			long occ1 = boy[v1[i]] - 1;
			long occ2 = girl[v2[i]] - 1;
			cur = max( 0LL, cur - occ1 );
			cur = max( 0LL, cur - occ2 );
			cnt += cur;
		}

		cout << cnt / 2 << "\n";
	}

	return 0;
}
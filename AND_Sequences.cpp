#include<bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

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

		for ( int i = 0; i < n; i++ ) cin >> a[i];

		int val = a[0], cnt = 0;

		for ( int i = 1; i < n; i++ ) val &= a[i]; 

		for ( int i = 0; i < n; i++ ) cnt += ( a[i] == val );

		long long res = ( cnt * 1LL * ( cnt - 1 ) ) % MOD;

		for ( int i = 1; i <= n-2; i++ ) res = ( res * 1LL * i ) % MOD;

		cout << res << "\n";
	}

	return 0;
}
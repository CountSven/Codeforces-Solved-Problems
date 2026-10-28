#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;
	int a[n];

	for ( int i = 0; i < n; i++ ) cin >> a[i];

	sort( a, a+n );

	long long sum = 0;

	long long dp[n];

	for ( int i = 0; i < n; i++ ) {
		sum += a[i];
		dp[i] = sum;
		if ( i - m >= 0 ) dp[i] += dp[i - m];
		cout << dp[i] << " "; 
	}
	cout << "\n";

	return 0;
}
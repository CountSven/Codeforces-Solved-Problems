#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 100000;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	vector<ll> dp(N+5, 0);

	for ( int i = 0, x; i < n; i++ ) {
		cin >> x;
		dp[x]++;
	}

	for ( ll i = 1; i <= N; i++ ) dp[i] *= i;

	for ( int i = 2; i <= N; i++ ) dp[i] = max( dp[i] + dp[i-2], dp[i-1] );

	cout << dp[N] << "\n";	

	return 0;
}
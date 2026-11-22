#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 2e5+8;

ll dp[N][2], vis[N][2];
ll a[N];
int n;

ll solve( int idx, int par )
{
	if ( idx > n ) return 0;
	if ( vis[idx][par] ) return dp[idx][par];
	vis[idx][par] = 1;

	if ( par % 2 ) {
		dp[idx][par] = max( dp[idx][par], a[idx] );
		dp[idx][par] = max( dp[idx][par], dp[idx][par] + solve( idx + 2, 1 ) );
		dp[idx][par] = max( dp[idx][par], a[idx] + solve( idx + 1, 1 ) );
		dp[idx][par] = max( dp[idx][par], solve( idx + 1, 0 ) );
	}
	else {
		dp[idx][par] = max( dp[idx][par], solve( idx + 1, 0 ) );
		dp[idx][par] = max( dp[idx][par], solve( idx + 1, 1 ) );
	}

	return dp[idx][par];
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		cin >> n;
		
		for ( int i = 1; i <= n; i++ ) {
			cin >> a[i];
			dp[i][0] = dp[i][1] = 0; 
			vis[i][0] = vis[i][1] = 0;
		}

		ll res = max( 0LL, solve( 1, 1 ) );

		// for ( int i = 1; i <= n; i++ ) cout << dp[i][0] << " ";
		// cout << "\n";
		// for ( int i = 1; i <= n; i++ ) cout << dp[i][1] << " ";
		// cout << "\n";

		cout << res << "\n";
	}

	return 0;
}
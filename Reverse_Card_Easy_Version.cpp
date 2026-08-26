#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, m;
		cin >> n >> m;

		ll cnt = n;

		for ( ll i = 2; i <= m; i++ ) {
			ll cur = n + i;
			ll sq = i * i;
			if ( cur < sq ) break;
			else cnt += ( cur / sq ); 
		}

		cout << cnt << "\n";
	}

	return 0;
}
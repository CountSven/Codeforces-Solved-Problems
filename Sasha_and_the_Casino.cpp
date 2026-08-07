#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
	ll k, x, a;
	cin >> k >> x >> a;

	ll loss = 0;

	for ( int i = 1; i <= x+1; i++ ) {
		ll bet = ( loss / ( k - 1 ) ) + 1;
		loss += bet;
		if ( loss > a ) {
			cout << "NO" << "\n";
			return;
		}
	}
	cout << "YES" << "\n";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) solve();

	return 0;
}
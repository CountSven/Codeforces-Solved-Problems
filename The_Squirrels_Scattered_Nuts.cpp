#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	int a[n];

	int od = -1, ev = -1;

	for ( int i = 0; i < n; i++ ) {
		cin >> a[i];

		if ( a[i] % 2 ) od = max( od, a[i] );
		else ev = max( ev, a[i] );
	}

	if ( od == -1 || ev == -1 ) cout << -1 << "\n";
	else cout << ( 1LL * ( od + ev ) ) << "\n";

	return 0;
}
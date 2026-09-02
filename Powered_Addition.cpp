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
		int n;
		cin >> n;
		ll a[n];

		for ( int i = 0; i < n; i++ ) cin >> a[i];

		ll mx = 0;

		for ( int i = 1; i < n; i++ ) {
			if ( a[i-1] > a[i] ) {
				ll need = a[i-1] - a[i];
				ll cur = __lg( need ) + 1;
				mx = max( mx, cur );
				a[i] = a[i-1];
			}
		}

		cout << mx << "\n";
	}

	return 0;
}
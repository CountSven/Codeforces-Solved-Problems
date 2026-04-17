#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	int a[n+1], b[n+1], en[n+1];

	for ( int i = 1; i <= n; i++ ) cin >> a[i];

	for ( int i = 1; i <= n; i++ ) {
		cin >> b[i];
		en[b[i]] = i;
	}

	int rng = en[a[1]], cnt = 0;

	for ( int i = 2; i <= n; i++ ) {
		if ( en[a[i]] < rng ) cnt++;
		rng = max( rng, en[a[i]] );
	}

	cout << cnt << "\n";

	return 0;
}
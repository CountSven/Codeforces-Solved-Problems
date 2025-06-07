#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	int a[n];

	bool isMultZ = false;
	int mn = 1000000;

	for ( int i = 0; i < n; i++ ) {
		cin >> a[i];
		if ( a[i] == 0 ) isMultZ = true;
		mn = min( mn, abs( a[i] ) );
	}

	if ( isMultZ ) cout << 0 << "\n";
	else cout << mn << "\n";

	return 0;
}
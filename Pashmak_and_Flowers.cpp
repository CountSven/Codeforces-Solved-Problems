#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	int a[n];

	for ( int i = 0; i < n; i++ ) cin >> a[i];

	sort( a, a+n );

	int l = 0, r = 0;

	for ( int i = 0; i < n; i++ ) {
		if ( a[i] == a[0] ) l++;
		else break; 
	}

	for ( int i = n-1; i >= 0; i-- ) {
		if ( a[i] == a[n-1] ) r++;
		else break;
	}

	cout << a[n-1] - a[0] << " ";
	
	if ( a[0] == a[n-1] ) cout << ( 1LL * l * ( l - 1 ) ) / 2 << "\n";
	else cout << 1LL * l * r << "\n";

	return 0;
}
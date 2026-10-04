#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	int a[n], b[n];

	for ( int i = 0; i < n; i++ ) cin >> a[i];
	for ( int i = 0; i < n; i++ ) cin >> b[i];

	map<pair<int, int>, int> mp;

	int all = 0, must0 = 0, mx = 0;

	for ( int i = 0; i < n; i++ ) {
		if ( !a[i] && !b[i] ) all++;
		else if ( !b[i] ) must0++;
		else if ( !a[i] ) continue;
		else {
			int g = __gcd( abs( a[i] ), abs( b[i] ) );
			a[i] /= g;
			b[i] /= g;
			if ( a[i] < 0 ) {
				a[i] *= -1;
				b[i] *= -1;
			}
			mp[{ -b[i], a[i] }]++;
		}
	}

	for ( auto [x, y] : mp ) mx = max( mx, y );

	cout << all + max( must0, mx ) << "\n"; 

	return 0;
}
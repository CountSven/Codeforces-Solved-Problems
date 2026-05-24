#include<bits/stdc++.h>
using namespace std;
using ll = unsigned long long;
using i128 = unsigned __int128;

i128 g( i128 a, i128 b )
{
	if ( b == 0 ) return a;
	else return g( b, a % b ); 
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	ll a[n];

	i128 l = 1;

	for ( int i = 0; i < n; i++ ) {
		cin >> a[i];
		l = ( l * ( a[i] / g( l, a[i] ) ) );
	}

	// i128 tmp = l;
	// string s = "";
	// while ( tmp ) {
	// 	s += ( tmp % 10 ) + '0';
	// 	tmp /= 10;
	// }
	// reverse( s.begin(), s.end() );
	// cout << s << "\n";

	int f = 0;

	for ( int i = 0; i < n; i++ ) {
		ll div = l / a[i];
		while ( div % 2 == 0 ) div /= 2;
		while ( div % 3 == 0 ) div /= 3;
		if ( div == 1 ) continue;
		f = 1;
		break;
	}

	if ( !f ) cout << "Yes" << "\n";
	else cout << "No" << "\n";

	return 0;
}
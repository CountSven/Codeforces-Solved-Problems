#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t;
	cin >> t;

	while ( t-- ) {
		long long l, r, a;
		cin >> l >> r >> a;

		if ( ( r / a ) == ( l / a ) ) cout << ( r / a ) + ( r % a ) << "\n";
		else cout << max( ( r / a ) + ( r % a ), ( r / a ) - 1 + ( a - 1 ) ) << "\n";
	}	

	return 0;
}
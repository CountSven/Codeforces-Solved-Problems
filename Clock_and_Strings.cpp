#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;

		int mn = min( a, b );
		int mx = max( a, b );

		if ( ( ( c > mn && c < mx ) && ( d < mn || d > mx ) ) || ( ( d > mn && d < mx ) && ( c < mn || c > mx ) ) ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;
}
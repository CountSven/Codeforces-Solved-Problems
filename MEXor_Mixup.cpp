#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int xCalc[300000];
	
	xCalc[0] = 0;

	for ( int i = 1; i <= 300000; i++ ) xCalc[i] = xCalc[i-1] ^ i;

	int t;
	cin >> t;

	while ( t-- ) {
		int a, b;
		cin >> a >> b;

		int cur = xCalc[a-1];

		if ( cur == b ) cout << a << "\n";
		else if ( ( cur ^ b ) != a ) cout << a + 1 << "\n";
		else cout << a + 2 << "\n";
	}

	return 0;
}
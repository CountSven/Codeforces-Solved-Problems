#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		long long a, b, c;
		cin >> a >> b >> c;

		bool isAP = false;

		long long cmpA = ( 2 * b ) - c;
		long long cmpB = a + c;
		long long cmpC = ( 2 * b ) - a;

		if ( cmpA % a == 0 && cmpA > 0 ) isAP = true;
		else if ( cmpB % ( 2 * b ) == 0 ) isAP = true;
		else if ( cmpC % c == 0 && cmpC > 0 ) isAP = true;

		if ( isAP ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;
}
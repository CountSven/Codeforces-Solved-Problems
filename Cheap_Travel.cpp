#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m, a, b;
	cin >> n >> m >> a >> b;

	int fCost = n * a;
	int sCost = ( ( n + m ) / m ) * b;  
	int second = 0, exact = 0;

	while ( second <= n ) {
		exact += b;
		second += m;
	}

	exact -= b;
	second -= m;

	while ( second < n ) {
		exact += a;
		second++;
	}

	if ( second == n ) cout << min( fCost, min( sCost, exact ) ) << "\n";
	else cout << min( fCost, sCost ) << "\n";

	return 0;
}
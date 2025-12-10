#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;

	if ( ( a + b + c + d + e ) % 5 == 0 && ( a + b + c + d + e ) >= 5 ) cout << ( a + b + c + d + e ) / 5 << "\n";
	else cout << -1 << "\n";

	return 0;
}
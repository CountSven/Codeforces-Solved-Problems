#include<bits/stdc++.h>
using namespace std; 

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;

	int dx = abs( x1 - x2 );
	int dy = abs( y1 - y2 );

	if ( dx == dy ) cout << x1 << " " << y2 << " " << x2 << " " << y1 << "\n";
	else if ( x1 == x2 ) cout << x1 + dy << " " << y1 << " " << x2 + dy << " " << y2 << "\n";
	else if ( y1 == y2 ) cout << x1 << " " << y1 + dx << " " << x2 << " " << y2 + dx << "\n";
	else cout << -1 << "\n";

	return 0;
}
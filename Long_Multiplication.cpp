#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		string x, y;
		cin >> x >> y;

		int xB = 0, yB = 0;

		for ( int i = 0; i < (int)x.size(); i++ ) {
			if ( xB ) {
				if ( x[i] > y[i] ) swap( x[i], y[i] );
			}
			else if ( yB ) {
				if ( y[i] > x[i] ) swap( y[i], x[i] ); 
			}
			else if ( x[i] > y[i] ) xB = 1;
			else if ( y[i] > x[i] ) yB = 1; 
		}

		cout << x << "\n";
		cout << y << "\n";
	}

	return 0;
}
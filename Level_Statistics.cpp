#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n;
		cin >> n;

		int prevP = 0, prevC = 0, f = 0;

		while ( n-- ) {
			int p, c;
			cin >> p >> c;

			if ( p < prevP ) f = 1;
			else if ( c < prevC ) f = 1;
			else if ( p == prevP && c > prevC ) f = 1;
			else if ( p - prevP < c - prevC ) f = 1; 

			prevP = p;
			prevC = c;
		}

		if ( !f ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;
}
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

		int mn = INT_MAX;

		while ( n-- ) {
			int d, s;
			cin >> d >> s;

			int curTrav = d + ceil( ( 1.0 ) * s / 2 ) - 1;
			mn = min( mn, curTrav );
		}

		cout << mn << "\n";
	}
	
	return 0;
}
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

		if ( n == 1 ) cout << 1 << "\n";
		else {
			cout << 1 << " ";

			int midIX = n / 2;

			int cur = n-1;

			for ( int i = 1; i < midIX; i++ ) {
				cout << cur << " ";
				cur--;
			}

			cout << n << " ";

			for ( int i = midIX+1; i < n; i++ ) {
				cout << cur << " ";
				cur--;
			}
			cout << "\n";
		}
	}

	return 0;
}
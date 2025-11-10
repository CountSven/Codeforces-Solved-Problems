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
			int l = 1, r = n;

			while ( l <= r ) {
				cout << l++ << " ";
				if ( r > l ) cout << r-- << " ";
			}
			cout << "\n";
		}
	}

	return 0;
}
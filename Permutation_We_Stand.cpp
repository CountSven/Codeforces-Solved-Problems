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

		if ( n < 4 ) cout << -1 << "\n";
		else {
			cout << 1 << " ";
			for ( int i = n; i > 2; i-- ) {
				if ( i != 4 ) cout << i << " ";
			}
			cout << 2 << " " << 4 << " ";
			cout << "\n";
		}
	} 

	return 0;
}
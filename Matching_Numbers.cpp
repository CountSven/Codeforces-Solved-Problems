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

		if ( n % 2 == 0 ) cout << "No" << "\n";
		else {
			cout << "Yes" << "\n";

			int j = 2 * n;
			
			for ( int i = 1; i <= n; i += 2, j-- ) cout << i << " " << j << "\n";
			for ( int i = 2; i <= n; i += 2, j-- ) cout << i << " " << j << "\n";	
		}
	} 

	return 0;
}
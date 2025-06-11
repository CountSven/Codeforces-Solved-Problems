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

		if ( n % 2 ) {
			for ( int i = 1; i <= n; i += 2 ) cout << i << " ";
			for ( int i = n-1; i >= 2; i -= 2 ) cout << i << " ";
			cout << "\n";
		}
		else {
			for ( int i = 1; i <= n; i += 2 ) cout << i << " ";
			for ( int i = n; i >= 2; i -= 2 ) cout << i << " ";
			cout << "\n";
		}
	}

	return 0;
}
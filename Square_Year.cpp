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

		int root = sqrt( n );
		double rOOt = sqrt( n );

		if ( root != rOOt ) cout << -1 << "\n";
		else {
			cout << root << " 0" << "\n";
		}
	}

	return 0;
}
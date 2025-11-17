#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int a;
		cin >> a;

		int angle = 180 - a;

		if ( 360 % angle ) cout << "NO" << "\n";
		else cout << "YES" << "\n";
	}

	return 0;
}
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

		int div = n / 2020;
		int mod = n % 2020;

		// cout << div << "\n";
		// cout << mod << "\n";

		if ( div >= mod ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;
}
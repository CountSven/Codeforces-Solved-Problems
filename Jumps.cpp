#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, k = 1;
		cin >> n;

		while ( ( k * ( k + 1 ) / 2 ) < n ) k++;

		if ( ( k * ( k + 1 ) / 2 ) == n + 1 ) cout << k + 1 << "\n";
		else cout << k << "\n";
	}

	return 0;
}
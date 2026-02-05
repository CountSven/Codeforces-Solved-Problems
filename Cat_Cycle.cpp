#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, k;
		cin >> n >> k;
		k--;

		if ( n % 2 ) k += ( k / ( n / 2 ) );

		k %= n;
		cout << k + 1 << "\n";
	}

	return 0;
}
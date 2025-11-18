#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		long long n, k;
		cin >> n >> k;

		if ( k * k > n ) cout << "NO" << "\n";
		else if ( k % 2 != n % 2 ) cout << "NO" << "\n";
		else cout << "YES" << "\n";
	} 

	return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		long long n, k, x;
		cin >> n >> k >> x;

		long long mnSum = k * ( k + 1 ) / 2;

		long long totSum = n * ( n + 1 ) / 2;
		long long initSum = ( ( n - k ) * ( n - k + 1 ) ) / 2;

		long long mxSum = totSum - initSum;

		if ( x >= mnSum && x <= mxSum ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}		

	return 0;
}
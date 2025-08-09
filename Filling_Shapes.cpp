#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	long long n;
	cin >> n;

	if ( n % 2 ) cout << 0 << "\n";
	else {
		n /= 2;

		long long cur = pow( 2, n );

		cout << cur << "\n";
	}

	return 0;
}
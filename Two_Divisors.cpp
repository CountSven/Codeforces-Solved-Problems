#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		long long a, b;
		cin >> a >> b;

		long long mlt = a * b;
		long long g = __gcd( a, b );

		long long cur = mlt / g;

		if ( cur == b ) cur *= ( b / a );

		cout << cur << "\n";
	}

	return 0;
}
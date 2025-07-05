#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		long long x, n;
		cin >> x >> n;

		long long p = 0;

		if ( n % 4 == 1 ) p = -n;
		else if ( n % 4 == 2 ) p = 1;
		else if ( n % 4 == 3 ) p = n+1;
		else if ( n % 4 == 4 ) p = 0;

		if ( x % 2 ) p = x - p;
		else p = x + p;

		cout << p << "\n";
	}

	return 0;
}
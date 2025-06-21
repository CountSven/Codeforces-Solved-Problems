#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		long long n;
		cin >> n;

		while ( 1 ) {
			if ( n % 2 == 0 ) n /= 2;
			else break;
		}

		if ( n == 1 ) cout << "NO" << "\n";
		else cout << "YES" << "\n";
	}

	return 0;
}
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

		if ( n <= 6 ) cout << 15 << "\n";
		else {
			if ( n % 2 ) n++;
			cout << ( n * 5 ) / 2 << "\n";
		}
	}

	return 0;
}
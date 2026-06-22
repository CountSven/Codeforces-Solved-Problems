#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		long long n, x, y, val;
		cin >> n >> x >> y;

		while ( n-- ) {
			cin >> val;
			x += val;
		}

		if ( x % 2 == y % 2 ) cout << "Alice" << "\n";
		else cout << "Bob" << "\n";
	}  

	return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int a, b, c;
		cin >> a >> b >> c;

		int sum = a + b + c;

		if ( sum % 2 ) cout << -1 << "\n";
		else cout << min( a + b, sum / 2 ) << "\n";
	}

	return 0;
}
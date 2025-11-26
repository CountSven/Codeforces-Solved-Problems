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

		long long cur = ( a + b ) / 3;

		long long res = min( min( a, b ), cur );

		cout << res << "\n";
	}

	return 0;
}
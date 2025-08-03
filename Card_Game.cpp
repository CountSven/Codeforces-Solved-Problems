#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;

		int cnt = 0;

		if ( a >= c && b >= d ) cnt += 2;
		if ( a == c && b == d ) cnt -= 2;
		if ( a >= d && b >= c ) cnt += 2;
		if ( a == d && b == c ) cnt -= 2;

		cout << cnt << "\n";
	}

	return 0;
}
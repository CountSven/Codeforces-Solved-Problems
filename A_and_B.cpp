#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int a, b;
		cin >> a >> b;
		int diff = abs( a - b );

		long long cur = 0, add = 1, cnt = 0;

		while ( cur < diff ) {
			cur += add;
			add++;
			cnt++;
		}

		while ( ( diff - cur ) % 2 ) {
			cur += add;
			add++;
			cnt++;
		}

		cout << cnt << "\n";
	}

	return 0;
}
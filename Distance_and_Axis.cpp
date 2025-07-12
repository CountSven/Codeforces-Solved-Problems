#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, k;
		cin >> n >> k;

		int cnt = 0;

		if ( ( n - k ) % 2 != 0 ) cnt++;
		cnt = max( cnt, k - n );

		cout << cnt << "\n";
	}

	return 0;
}
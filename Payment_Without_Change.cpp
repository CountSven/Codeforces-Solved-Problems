#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int q;
	cin >> q;

	while ( q-- ) {
		long long a, b, n, s;
		cin >> a >> b >> n >> s;

		long long cur = 0, floor;

		floor = s / n;

		if ( floor > a ) cur = a * n;
		else cur = floor * n;

		// cout << cur << "\n";

		if ( s - cur <= b ) cout << "YES" << "\n";
		else cout << "NO" << "\n";

	}

	return 0;
}
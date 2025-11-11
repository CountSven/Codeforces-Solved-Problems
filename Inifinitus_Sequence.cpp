#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int q;
	cin >> q;

	while ( q-- ) {
		long long x, k;
		cin >> x >> k;

		if ( x >= k ) cout << 1 << "\n";
		else if ( x * 2 >= k ) cout << 2 << "\n";
		else {
			int cnt = 2;

			long long f = x, s = x * 2;

			while ( s < k ) {
				long long tmp = s;
				s += f;
				cnt++;
				f = tmp;
			}

			cout << cnt << "\n";
		}
	}

	return 0;
}
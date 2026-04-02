#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n;
		cin >> n;
		vector<int> v(n);

		for ( int i = 0; i < n; i++ ) cin >> v[i];

		int l = 0, r = n-1, lst = 0, move = 0, a = 0, b = 0;

		while ( l <= r ) {
			int cur = 0;

			if ( move % 2 == 0 ) {
				while ( l <= r && cur <= lst ) cur += v[l++];
				a += cur;
			}
			else {
				while ( r >= l && cur <= lst ) cur += v[r--];
				b += cur;
			}

			lst = cur;
			move++;
		}

		cout << move << " " << a << " " << b << "\n";
	}

	return 0;
}
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, k, q;
		cin >> n >> k >> q;
		vector<int> a(k+1), b(k+1);

		for (int i = 1; i <= k; i++ ) cin >> a[i];
		for (int i = 1; i <= k; i++ ) cin >> b[i];

		while ( q-- ) {
			int d;
			cin >> d;

			if ( d == n ) cout << b[k] << " ";
			else {
				int cur = upper_bound( a.begin(), a.end(), d ) - a.begin();
				cur--;
				ll dist = a[cur+1] - a[cur];
				ll tm = b[cur+1] - b[cur];
				ll tot = d - a[cur];
				// double dpt = (1.0) * dist / tm;
				// double res = (1.0) * tot / dpt;
				ll res = tot * tm / dist;
				cout << b[cur] + res << " ";
			}
		}
		cout << "\n";
	}

	return 0;
}
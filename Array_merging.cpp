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
		vector<int> a(n), b(n), c(2*n+1);

		int mx = 0, cur = 0, cnt = 0;

		for ( int i = 0; i < n; i++ ) {
			cin >> a[i];

			if ( a[i] == cur ) cnt++;
			else {
				cur = a[i];
				cnt = 1;
			}

			c[a[i]] = max( c[a[i]], cnt );
			mx = max( mx, c[a[i]] );
		}

		cur = 0;
		cnt = 0;

		for ( int i = 0; i < n; i++ ) {
			cin >> b[i];

			if ( b[i] == cur ) cnt++;
			else {
				cur = b[i];
				cnt = 1;
			}

			mx = max( mx, c[b[i]] + cnt );
		}

		cout << mx << "\n";
	}

	return 0;
}
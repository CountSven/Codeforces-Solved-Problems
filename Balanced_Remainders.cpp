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
		int a[n], r[3] = {};

		for ( int i = 0; i < n; i++ ) {
			cin >> a[i];
			r[a[i] % 3]++;
		}

		int cnt = 0;

		for ( int i = 0; i < 6; i++ ) {
			if ( r[i%3] > n / 3 ) {
				cnt += r[i%3] - n / 3;
				r[(i+1) % 3] += r[i%3] - n / 3;
				r[i%3] = n / 3;
			}
		}

		cout << cnt << "\n";
	}

	return 0;
}
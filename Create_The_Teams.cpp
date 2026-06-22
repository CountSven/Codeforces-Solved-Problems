#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, x;
		cin >> n >> x;
		vector<int> a(n);

		for ( int i = 0; i < n; i++ ) cin >> a[i];

		sort( a.rbegin(), a.rend() );

		int cnt = 0, res = 0;

		for ( int i = 0; i < n; i++ ) {
			cnt++;
			if ( cnt * 1LL * a[i] >= x ) {
				res++;
				cnt = 0;
			}
		}

		cout << res << "\n";
	}

	return  0;
}
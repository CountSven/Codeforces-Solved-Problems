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
		int n;
		cin >> n;
		vector<int> v(n);

		for ( int i = 0; i < n; i++ ) cin >> v[i];
		
		ll sum = 0, res = n;

		for ( int i = 0; i < n; i++ ) {
			sum += v[i];

			ll cnt = 1, cur = 0, f = 0;

			for ( int j = i+1; j < n; j++ ) {
				cur += v[j];
				
				if ( cur > sum ) {
					f = 1;
					break;
				}
				if ( cur == sum ) {
					cnt++;
					cur = 0;
				}
			}

			if ( !f && !cur ) res = min( res, n - cnt );
		}

		cout << res << "\n";
	}

	return 0;
}
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

		map<int, int> mp;

		for ( int i = 0; i < 2*n; i++ ) {
			int x;
			cin >> x;
			mp[x]++;
		}

		int cnt = 0;

		vector<int> v;

		for ( auto [x, y] : mp ) {
			if ( y % 2 ) cnt++;
			else v.push_back( y );
		}

		int bag1 = 0, bag2 = 0;

		for ( auto u : v ) {
			if ( bag1 > bag2 ) swap( bag1, bag2 );

			int a = u / 2, b = u / 2;

			if ( a % 2 == 0 ) {
				a++;
				b--;
			}

			if ( bag1 + a <= n && bag2 + b <= n ) {
				cnt += 2;
				bag1 += a;
				bag2 += b;
			}
		}

		cout << cnt << "\n";
	}

	return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		long long n, x, y;
		cin >> n >> x >> y;
		vector<long long> v(n);

		long long sum = 0, cnt = 0;

		for ( int i = 0; i < n; i++ ) {
			cin >> v[i];
			sum += v[i];
		}

		sort( v.begin(), v.end() );

		for ( int i = 0; i < n; i++ ) {
			long long l = lower_bound( v.begin(), v.end(), sum - y - v[i] ) - v.begin();
			long long r = upper_bound( v.begin(), v.end(), sum - x - v[i] ) - v.begin();
			// cout << v[i] << " " << l << " " << r << "\n";

			cnt += r - l;
			
			if ( i >= l && i < r ) cnt--;
		}

		cout << cnt / 2 << "\n";
	}

	return 0;
}
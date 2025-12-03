#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		long long n, c;
		cin >> n >> c;
		vector<long long> v(n);

		for ( long long i = 0; i < n; i++ ) {
			long long x;
			cin >> x;
			v[i] = x + i + 1;
		}

		sort( v.begin(), v.end() );

		long long cur = 0, cnt = 0;

		for ( long long i = 0; i < n; i++ ) {
			if ( cur + v[i] <= c ) {
				cur += v[i];
				cnt++;
			}
			else break;
		}

		cout << cnt << "\n";
	}

	return 0;
}
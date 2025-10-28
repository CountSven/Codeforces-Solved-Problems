#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;
	vector<int> v(n), r;

	long long sum = 0;

	for ( int i = 0; i < n; i++ ) {
		cin >> v[i];
		sum += v[i];
	}

	if ( n == 1 ) cout << m << "\n";
	else {
		vector<long long> prefSum(n+1), sufSum(n+1);

		prefSum[0] = 0;

		for ( int i = 0; i < n; i++ ) prefSum[i+1] = v[i] + prefSum[i];

		r = v;

		reverse( r.begin(), r.end() );

		sufSum[0] = 0;

		for ( int i = 0; i < n; i++ ) sufSum[i+1] = r[i] + sufSum[i];

		// for ( int i = 0; i < n; i++ ) cout << prefSum[i] << " ";
		// cout << "\n";
		// for ( int i = 0; i < n; i++ ) cout << sufSum[i] << " ";
		// cout << "\n";
		
		for ( int i = 0; i < n; i++ ) {
			long long res = max( prefSum[i], sufSum[n - i - 1] );

			long long curSum = sum - v[i] + m;

			long long ans = max( res, curSum );

			cout << ans << " ";
		}
		cout << "\n";
	}

	return 0;
}
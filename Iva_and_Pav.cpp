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

		vector<vector<long long>> bit( n+1, vector<long long>(31, 0) );

		for ( int i = 1, x; i <= n; i++ ) {
			cin >> x;
			for ( int j = 0; j < 31; j++ ) {
				if ( x & ( 1 << j ) ) bit[i][j] += 1;
			}
		}

		for ( int i = 1; i <= n; i++ ) {
			for ( int j = 0; j < 31; j++ ) bit[i][j] += bit[i-1][j];
		}

		int q;
		cin >> q;

		while ( q-- ) {
			int l, k;
			cin >> l >> k;
			int left = l, right = n, res = -1;
			while ( left <= right ) {
				int mid = left + ( right - left ) / 2;
				int req = mid - l + 1;
				long long val = 0;
				for ( int j = 0; j < 31; j++ ) {
					long long cur = bit[mid][j] - bit[l-1][j];
					if ( cur == req ) val += ( 1LL << j );
				}
				if ( val >= k ) {
					res = mid;
					left = mid + 1;
				}
				else right = mid - 1;
			}
			cout << res << " ";
		}
		cout << "\n";
	}

	return 0;
}
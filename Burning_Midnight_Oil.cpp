#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, k;
	cin >> n >> k;

	int l = 1, r = n, res = n;

	while ( l <= r ) {
		int mid = l + ( r - l ) / 2;

		int val = mid, cur = 0;

		while ( val ) {
			cur += val;
			val /= k;
		}

		if ( cur >= n ) {
			res = mid;
			r = mid - 1;
		}
		else l = mid + 1;
	}

	cout << res << "\n";

	return 0;
}
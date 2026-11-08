#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int l = 2, r = 999, res = 999;

		while ( l <= r ) {
			int mid = l + ( r - l ) / 2;
			int cur;
			cout << "? " << mid << " " << mid << endl;
			cin >> cur;
			if ( mid * mid != cur ) {
				res = mid;
				r = mid - 1;
			}
			else l = mid + 1;
		}
		cout << "! " << res << endl;
	}

	return 0;
}
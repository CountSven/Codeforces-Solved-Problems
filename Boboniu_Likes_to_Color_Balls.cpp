#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int r, g, b, w;
		cin >> r >> g >> b >> w;

		int oddCnt = 0;

		if ( r % 2 ) oddCnt++;
		if ( g % 2 ) oddCnt++;
		if ( b % 2 ) oddCnt++;
		if ( w % 2 ) oddCnt++;

		if ( oddCnt == 1 || oddCnt == 0 ) cout << "YES" << "\n";
		else if ( r > 0 && g > 0 && b > 0 ) {
			r--;
			g--;
			b--;
			w += 3;

			oddCnt = 0;

			if ( r % 2 ) oddCnt++;
			if ( g % 2 ) oddCnt++;
			if ( b % 2 ) oddCnt++;
			if ( w % 2 ) oddCnt++;

			if ( oddCnt == 1 || oddCnt == 0 ) cout << "YES" << "\n";
			else cout << "NO" << "\n";
		}
		else cout << "NO" << "\n";
	}

	return 0;
}
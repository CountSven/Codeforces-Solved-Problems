#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	int x[n], h[n];

	for ( int i = 0; i < n; i++ ) cin >> x[i] >> h[i];

	int cnt = 1, last = 1;
	
	for ( int i = 1; i < n; i++ ) {
		last = max( last, x[i-1] );
		int curL = x[i] - h[i];
		int curR = x[i] + h[i];
		if ( curL > last ) {
			last = curL;
			cnt++;
		}
		else if ( i+1 < n && curR < x[i+1] ) {
			last = curR;
			cnt++;
		}
		else {
			if ( i+1 == n ) cnt++;
			else last = x[i];
		}
	}

	cout << cnt << "\n";

	return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, d, k;
		cin >> n >> d >> k;
		vector<int> st( n+2, 0 ), en( n+2, 0 );

		while ( k-- ) {
			int l, r;
			cin >> l >> r;
			st[l]++;
			en[r + 1]++;
		} 

		int cur = 0;

		for ( int i = 1; i <= d; i++ ) cur += st[i];

		int mn = cur, mx = cur, mnPos = 1, mxPos = 1;

		for ( int i = 2, j = i+d-1; j <= n; i++, j++ ) {
			cur += st[j];
			cur -= en[i];
			if ( cur > mx ) {
				mx = cur;
				mxPos = i;
			}
			if ( cur < mn ) {
				mn = cur;
				mnPos = i;
			}
		}

		cout << mxPos << " " << mnPos << "\n";
	}

	return 0;
}
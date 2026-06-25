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
		int a[n], b[n];

		for ( int i = 0; i < n; i++ ) cin >> a[i];
		for ( int i = 0; i < n; i++ ) cin >> b[i];

		int cnt1 = 0, cnt2 = 0, pos = 0, neg = 0;

		for ( int i = 0; i < n; i++ ) {
			if ( a[i] > b[i] ) cnt1 += a[i];
			else if ( a[i] < b[i] ) cnt2 += b[i];
			else {
				if ( a[i] > 0 ) pos++;
				else if ( a[i] < 0 ) neg++; 
			}
		}

		while ( pos-- ) {
			if ( cnt1 > cnt2 ) cnt2++;
			else cnt1++;
		}

		while ( neg-- ) {
			if ( cnt1 > cnt2 ) cnt1--;
			else cnt2--;
		}

		// cout << cnt1 << " " << cnt2 << "\n";

		cout << min( cnt1, cnt2 ) << "\n";
	} 


	return 0;
}
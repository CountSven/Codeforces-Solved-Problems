#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, k;
	cin >> n >> k;
	int a[n];

	for ( int i = 0; i < n; i++ ) cin >> a[i];

	sort( a, a+n );

	int l = 0, cnt = 0, val = 1;

	while ( l < n && a[l] == val ) {
		cnt++;
		l++;
	}	
	while ( l < n && cnt < k ) {
		cnt++;
		while ( l+1 < n && a[l+1] == a[l] ) {
			cnt++;
			l++;
		}
		l++;
		val = a[l-1];
	}

	if ( cnt == k && val >= 1 && val <= 1000000000 ) cout << val << "\n";
	else cout << -1 << "\n";

	return 0;
}
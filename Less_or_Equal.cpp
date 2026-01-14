#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, k;
	cin >> n >> k;
	int a[n+1];

	for ( int i = 1; i <= n; i++ ) cin >> a[i];

	sort( a + 1, a + n + 1 );

	int idx = k, val;

	if ( idx > 0 ) val = a[idx];
	else val = 1;

	while ( idx + 1 <= n && a[idx + 1] == val ) idx++;

	if ( idx == k && val <= 1000000000 ) cout << val << "\n";
	else cout << -1 << "\n";

	return 0;
}
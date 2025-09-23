#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, p;
	cin >> n >> p;
	int a[n+1];

	for ( int i = 1; i <= n; i++ ) cin >> a[i];

	int cnt = 0, idx = 1;

	if ( a[p] == 1 ) cnt++;

	while ( 1 ) {
		if ( p + idx > n && p - idx < 1 ) break;

		if ( p - idx >= 1 && p + idx <= n && a[p + idx] == 1 && a[p - idx] == 1 ) cnt += 2;
		else if ( a[p + idx] == 1 && p - idx < 1 ) cnt++;
		else if ( a[p - idx] == 1 && p + idx > n ) cnt++;

		idx++;
	}

	cout << cnt << "\n";

	return 0;
}
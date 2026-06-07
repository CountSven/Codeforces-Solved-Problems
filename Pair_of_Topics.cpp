#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	int a[n], b[n];

	for ( int i = 0; i < n; i++ ) cin >> a[i];
	for ( int i = 0; i < n; i++ ) {
		cin >> b[i];
		a[i] -= b[i];
	}

	sort( a, a+n );

	long long cnt = 0;

	for ( int i = 0; i < n; i++ ) {
		int cur = upper_bound( a, a+i, -a[i] ) - a;
		cnt += i - cur;
	}

	cout << cnt << "\n";

	return 0;
}
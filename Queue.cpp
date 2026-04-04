#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	int a[n];

	for ( int i = 0; i < n; i++ ) cin >> a[i];

	sort( a, a+n );

	long long sum = 0, cnt = 0;

	for ( int i = 0; i < n; i++ ) {
		if ( sum <= a[i] ) {
			sum += a[i];
			cnt++;
		}
	}

	cout << cnt << "\n";

	return 0;
}
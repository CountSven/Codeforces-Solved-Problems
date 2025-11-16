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

	long long sum = 0;

	for ( int i = 1; i <= k; i++ ) sum += a[i];

	long long res = sum, idx = 1;

	for ( int i = 1; i <= n-k; i++ ) {
		sum -= a[i];
		sum += a[i+k];

		res = min( res, sum );

		if ( sum == res ) idx = i+1;
	}

	cout << idx << "\n";

	return 0;
}
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

	long long sum = 0, cur = 0;
	
	for ( int i = 0; i < k; i++ ) cur += a[i];

	sum = cur;

	for ( int i = k, j = 0; i < n; i++, j++ ) {
		cur -= a[j];
		cur += a[i];
		sum += cur;
	}

	long double res = ( ( 1.0 ) * sum ) / ( n - k + 1 );

	cout << fixed << setprecision(12) << res << "\n"; 

	return 0;
}
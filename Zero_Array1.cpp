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

	long long sum = accumulate( a, a+n, 0LL );
	int mx = *max_element( a, a+n );

	if ( sum % 2 || mx > sum - mx ) cout << "NO" << "\n";
	else cout << "YES" << "\n";

	return 0;
}
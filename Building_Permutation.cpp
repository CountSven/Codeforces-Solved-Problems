#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;
	cin >> n;
	long long a[n+1];

	for ( int i = 1; i <= n; i++ ) cin >> a[i];

	sort( a+1, a+n+1 );

	long long res = 0;

	for ( int i = 1; i <= n; i++ ) res += ( abs( a[i] - i ) );

	cout << res << "\n";	

	return 0;
}
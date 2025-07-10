#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	long long n, k;
	cin >> n >> k;

	long long mx = -1e18;

	while ( n-- ) {
		long long f, t;
		cin >> f >> t;

		if ( t <= k ) mx = max( mx, f );
		else mx = max( mx, f - ( t - k ) );
	}

	cout << mx << "\n";

	return 0;
}
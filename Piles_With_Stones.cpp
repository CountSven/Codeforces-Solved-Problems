#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;
	cin >> n;
	int a[n], b[n];

	long long cntA = 0, cntB = 0;

	for ( int i = 0; i < n; i++ ) {
		cin >> a[i];
		cntA += a[i];
	}

	for ( int i = 0; i < n; i++ ) {
		cin >> b[i];
		cntB += b[i];
	}

	if ( cntB <= cntA ) cout << "YES" << "\n";
	else cout << "NO" << "\n";

	return 0;
}
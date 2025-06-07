#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	int a[n];

	for ( int i = 1; i <= n; i++ ) cin >> a[i];

	bool isLove = false;

	for ( int i = 1; i <= n; i++ ) {
		int p1 = a[i];
		int p2 = a[p1];
		int p3 = a[p2];

		if ( i == p3 ) isLove = true;
	}

	if ( isLove ) cout << "YES" << "\n";
	else cout << "NO" << "\n";

	return 0;
}
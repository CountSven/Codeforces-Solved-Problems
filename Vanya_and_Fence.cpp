#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, k;
	cin >> n >> k;
	int a[n];

	int cnt = 0;

	for ( int i = 0; i < n; i++ ) {
		cin >> a[i];
		if ( a[i] <= k ) cnt += 1;
		else cnt += 2;
	}

	cout << cnt << "\n";

	return 0;
}
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

	int cnt = 1, val = a[0];

	for ( int i = 1; i < n; i++ ) {
		if ( a[i] > val ) {
			cnt++;
			val = a[i];
		}
	}

	cout << cnt << "\n";

	return 0;
}
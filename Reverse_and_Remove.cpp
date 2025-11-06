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

	int l = 0, r = n-1;

	for ( int i = 1; i <= k; i++ ) {
		if ( i % 2 ) l++;
		else r--;
	}

	if ( k % 2 ) {
		for ( int i = r; i >= l; i-- ) cout << a[i] << " ";
		cout << "\n";
	}
	else {
		for ( int i = l; i <= r; i++ ) cout << a[i] << " ";
		cout << "\n";
	}

	return 0;
}
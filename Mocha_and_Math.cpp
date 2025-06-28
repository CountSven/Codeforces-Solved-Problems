#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n;
		cin >> n;
		int a[n];

		for ( int i = 0; i < n; i++ ) cin >> a[i];

		int bitAnd = a[0];

		for ( int i = 0; i < n; i++ ) bitAnd &= a[i];

		cout << bitAnd << "\n";
	}

	return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, x;
		cin >> n >> x;

		for ( int i = 0; i < x; i++ ) cout << i << " ";
		for ( int i = n-1; i >= x; i-- ) cout << i << " ";
		cout << "\n";
	}

	return 0;
}
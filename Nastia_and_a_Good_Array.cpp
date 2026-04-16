#include<bits/stdc++.h>
using namespace std;

const int PR = 1e9+7;

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

		cout << n / 2 << "\n";
		for ( int i = 1; i < n; i += 2 ) {
			cout << i << " " << i+1 << " " <<  min( a[i-1], a[i] ) << " " << PR << "\n";
		}
	}

	return 0;
}
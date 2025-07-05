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

		int fiIdx = 0, miIdx = 0, laIdx = 0;
		bool isfnd = false;

		for ( int i = 1; i < n-1; i++ ) {
			if ( a[i] >= 3 && a[i-1] < a[i] && a[i] > a[i+1] ) {
				fiIdx = i;
				miIdx = i+1;
				laIdx = i+2;
				isfnd = true;
				break;
			}
		}

		if ( !isfnd ) cout << "NO" << "\n";
		else {
			cout << "YES" << "\n";
			cout << fiIdx << " " << miIdx << " " << laIdx << "\n";
		}
	}

	return 0;
}
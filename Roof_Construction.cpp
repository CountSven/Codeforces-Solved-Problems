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

		cout << n - 1 << " ";

		int idx;

		for ( int i = n - 2; i >= 0; i-- ) {
			if ( ( i & ( i + 1 ) ) == 0 ) {
				idx = i;
				break;
			}

			cout << i << " ";
		}

		cout << 0 << " ";

		for ( int i = 1; i <= idx; i++ ) cout << i << " ";
		cout << "\n";
	}

	return 0;
}
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

		for ( int i = 0; i < n; i++ ) {
			cin >> a[i];
			if ( i ) {
				int need = 0;

				for ( int j = 0; j < 30; j++ ) {
					if ( a[i-1] & ( 1 << j ) && !( a[i] & ( 1 << j ) ) ) {
						a[i] += ( 1 << j );
						need += ( 1 << j );
					}
				}

				cout << need << " ";
			}
			else cout << 0 << " ";
		}
		cout << "\n";
	}

	return 0;
}
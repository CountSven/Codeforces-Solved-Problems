#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, w;
		cin >> n >> w;
		vector<int> freq( 22, 0 );

		for ( int i = 0; i < n; i++ ) {
			int x;
			cin >> x;
			freq[__lg( x )]++;
		}

		int tmp = n, h = 0;

		while ( tmp ) {
			h++;
			int cur = w;
			for ( int i = 21; i >= 0; i-- ) {
				if ( freq[i] ) {
					int val = pow( 2, i );
					while ( freq[i] && cur >= val ) {
						cur -= val;
						freq[i]--;
						tmp--;
					}
				}
			}
		}

		cout << h << "\n";
	}

	return 0;
}
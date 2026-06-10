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
		vector<int> a(n);

		for ( int i = 0; i < n; i++ ) cin >> a[i];

		int val1 = a[0], val2 = 0, res = 0;

		for ( int i = 1; i < n; i++ ) {
			if ( !val2 ) {
				if ( a[i] <= val1 ) val1 = a[i];
				else val2 = a[i];
			}
			else {
				if ( val1 < val2 ) swap( val1, val2 );
				
				if ( a[i] <= val2 ) val2 = a[i];
				else if ( a[i] <= val1 ) val1 = a[i];
				else {
					val2 = a[i];
					res++;
				}
			}
		}

		cout << res << "\n";
	}

	return 0;
}
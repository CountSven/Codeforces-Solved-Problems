#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, k;
		cin >> n >> k;

		int l = 1, r = n;

		for ( int i = 1; i <= n; i++ ) {
			if ( i % 2 ) {
				cout << r << " ";
				r--;
			}
			else {
				cout << l << " ";
				l++;
			}
		}
		cout << "\n";
	}

	return 0;
}
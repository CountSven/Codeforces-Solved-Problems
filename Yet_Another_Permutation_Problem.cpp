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
		
		for ( int i = n; i > n/2; i-- ) {
            int tmp = i;

			if ( tmp % 2 ) cout << tmp << " ";
			else {
				cout << tmp << " ";
				while ( tmp % 2 != 1 ) {
					cout << tmp / 2 << " ";
					tmp /= 2;
				}
			}
		}
		cout << "\n";
	}

	return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ){
		int n;
		cin >> n;
		int a[n];

		int sum = 0;

		for ( int i = 0; i < n; i++ ){
			cin >> a[i];
			sum += a[i];
		}

		if ( sum % 3 == 0 || sum == 0 ){
			cout << 0 << "\n";
		}
		else{
			bool found = false;
			for ( int i = 0; i < n; i++ ){
				if ( ( ( sum - a[i] ) % 3 == 0 ) || ( ( sum - a[i] ) == 0 ) ){
					cout << 1 << "\n";
					found = true;
					break;
				}
			}

			if ( !found ) cout << 3 - ( sum % 3 ) << "\n";
		}
	}
	
	return 0;
}
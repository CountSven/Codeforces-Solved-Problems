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

		int diff = -1000000, cnt = 0;

		for ( int i = 0; i < n; i++ ) {
			cin >> a[i];
			if ( a[i] > diff + 1 ) {
				cnt++;
				diff = a[i];
			}
		}
		
		cout << cnt << "\n";
	}

	return 0;
}
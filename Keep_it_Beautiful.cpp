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

		int lst = a[0];
		cout << 1;

		bool isNotF = true;

		int mn = a[0], mx = INT_MAX;

		for ( int i = 1; i < n; i++ ) {
			if ( a[i] >= mn && a[i] <= mx ) {
				cout << 1;
				mn = a[i];
			}
			else {
				if ( isNotF && a[i] <= lst ) {
					cout << 1;
					mn = a[i];
					mx = lst;
					isNotF = false;
				}
				else cout << 0;
			}
		}
		cout << "\n";
	}

	return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	int a[n];

	for ( int i = 0; i < n; i++ ) cin >> a[i];

	int cnt = 0, last = -1;
	
	for ( int i = 0; i < n; i++ ) {
		if ( a[i] == 0 ) {
			cnt++;
			last = 0;
		}
		else if ( a[i] == 1 ) {
			if ( last == 1 ) {
				cnt++;
				last = 0;
			}
			else last = 1;
		}
		else if ( a[i] == 2 ) {
			if ( last == 2 ) {
				cnt++;
				last = 0;
			}
			else last = 2;
		}
		else {
			if ( last == 1 ) last = 2;
			else if ( last == 2 ) last = 1;
		}
	}

	cout << cnt << "\n";

	return 0;
}
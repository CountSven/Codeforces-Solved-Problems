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

	int f = 0, t25 = 0, t50 = 0, t100 = 0;

	for ( int i = 0; i < n; i++ ) {
		if ( a[i] == 25 ) t25++;
		else if ( a[i] == 50 ) {
			if ( t25 < 1 ) {
				f = 1;
				break;
			}
			else {
				t25--;
				t50++;
			}
		}
		else {
			if ( t50 && t25 ) {
				t50--;
				t25--;
				t100++;
			}
			else if ( t25 >= 3 ) {
				t25 -= 3;
				t100++;
			}
			else {
				f = 1;
				break;
			}
		}

		if ( f == 1 ) break;
	}

	if ( !f ) cout << "YES" << "\n";
	else cout << "NO" << "\n";

	return 0;
}
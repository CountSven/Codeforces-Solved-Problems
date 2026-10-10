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
		int pos[n];

		for ( int i = 0, x; i < n; i++ ) {
			cin >> x;
			x--;
			pos[x] = i;
		}

		int res = n / 2;

		while ( res > 0 && pos[res] > pos[res - 1] && pos[n - res - 1] < pos[n - res] ) res--;

		cout << res << "\n";	
	} 

	return 0;
}
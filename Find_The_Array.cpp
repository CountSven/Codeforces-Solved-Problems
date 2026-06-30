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

		for ( int i = 0, x; i < n; i++ ) {
			cin >> x;
			int cur = 1;
			while ( cur * 2 <= x ) cur *= 2;
			cout << cur << " ";
		}
		cout << "\n";
	}

	return 0;
}
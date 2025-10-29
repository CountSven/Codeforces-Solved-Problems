#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	int cnt = 0;

	for ( int i = 1e9; i >= 1; i-- ) {
		cout << i << " ";
		cnt++;

		if ( cnt == n ) break;
	}
	cout << "\n";

	return 0;
}
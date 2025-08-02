#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, a, b;
	cin >> n >> a >> b;

	int front = 0, back = n-1, cnt = 0;

	for ( int i = 1; i <= n; i++ ) {
		// cout << front << " " << back << "\n";
		front++;
		back--;
		if ( front > a && back < b ) cnt++;
	}

	cout << cnt << "\n";

	return 0;
}
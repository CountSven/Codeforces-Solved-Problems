#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	cout << min( n, m ) + 1 << "\n";
	for ( int i = 0, j = m, k = 0; k <= min( n, m ); i++, j--, k++ ) cout << i << " " << j << "\n";

	return 0;
}
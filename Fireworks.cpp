#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		long long a, b, m;
		cin >> a >> b >> m;

		long long cntF = ( m / a ) + 1;
		long long cntS = ( m / b ) + 1;

		cout << cntF + cntS << "\n";
	}

	return 0;
}
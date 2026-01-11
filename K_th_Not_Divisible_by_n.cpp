#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while (t--) {
		int n, k;
		cin >> n >> k;

		int req = ( k - 1 ) / ( n - 1 );

		cout << k + req << endl;
	}

	return 0;
}
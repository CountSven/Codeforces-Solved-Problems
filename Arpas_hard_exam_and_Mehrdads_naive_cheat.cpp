#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	int dig = 1378, cur = 1;

	while ( n > 0 ) {
		if ( n % 2 ) cur = ( dig * cur ) % 10;
		dig = ( dig * dig ) % 10;
		n /= 2;
	}

	cout << cur << "\n";

	return 0;
}
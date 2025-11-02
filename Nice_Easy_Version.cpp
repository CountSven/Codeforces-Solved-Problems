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

		if ( n >= 1 && n <= 6 ) cout << 6 << "\n";
		else if ( n >= 7 && n <= 9 ) cout << 9 << "\n";
		else if ( n >= 10 && n <= 66 ) cout << 66 << "\n";
		else if ( n >= 67 && n <= 69 ) cout << 69 << "\n";
		else if ( n >= 70 && n <= 96 ) cout << 96 << "\n";
		else if ( n >= 97 && n <= 99 ) cout << 99 << "\n";
	}

	return 0;
}
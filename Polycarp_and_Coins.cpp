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

		int a = n / 3;
		int b = n - a;
		int c = 0;
		if ( b % 2 ) c = b / 2 + 1;
		else c = b / 2;

		if ( a + (2 * c) != n ) swap( a, c );
 
		cout << a << " " << c << "\n";
	}

	return 0;
}
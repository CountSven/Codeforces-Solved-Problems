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

		int a, b, c = 1;

		if ( n % 4 == 1 ) {
			a = n / 2 + 1;
			b = n / 2 - 1;
		}
		else if ( n % 2 == 0 ) {
			a = n / 2;
			b = n / 2 - 1;
		}
		else {
			a = n / 2 + 2;
			b = n / 2 - 2;
		}

		cout << a << " " << b << " " << c << "\n";
	}

	return 0;
}
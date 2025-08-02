#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		long long a, b;
		cin >> a >> b;

		long long x, y, z;

		if ( b == 1 ) cout << "NO" << "\n";
		else if ( b == 2 ) {
			x = a;
			y = a * b;
			b++;
			z = a * b;

			cout << "YES" << "\n";
			cout << x << " " << y << " " << z << "\n";
		}
		else {
			x = a;
			z = a * b;
			b--;
			y = a * b;

			cout << "YES" << "\n";
			cout << x << " " << y << " " << z << "\n";
		}
	}

	return 0;
}
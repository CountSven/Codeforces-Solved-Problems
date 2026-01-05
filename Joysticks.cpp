#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, b;
	cin >> a >> b;

	int cnt = 0, f = 0;

	if ( a < 2 && b < 2 ) f = 1;

	while ( a > 0 && b > 0 && !f ) {
		// cout << a << " " << b << "\n";

		if ( a < b ) {
			a++;
			b -= 2;
		}
		else {
			b++;
			a -= 2;
		}

		cnt++;
	}

	cout << cnt << "\n";

	return 0;
}
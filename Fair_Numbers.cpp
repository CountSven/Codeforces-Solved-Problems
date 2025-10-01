#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		long long n, tmp, cur;
		cin >> n;

		tmp = n;

		while ( tmp > 0 ) {
			cur = tmp % 10;
			tmp /= 10;

			if ( cur != 0 && n % cur != 0 ) {
				n++;
				tmp = n;
			}
		}

		cout << n << "\n";
	}

	return 0;
}
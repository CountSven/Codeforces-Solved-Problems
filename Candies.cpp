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

		int sum = 3, pow = 2;

		while ( n % sum != 0 ) {
			pow *= 2;
			sum += pow;
		}

		cout << n / sum << "\n";
	}

	return 0;
}
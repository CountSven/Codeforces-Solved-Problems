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

		if ( a == b ) cout << 0 << " " << 0 << "\n";
		else {
			if ( b > a ) swap(a, b);

			long long maxG = a - b;

			long long move1 = b % maxG;
			long long move2 = maxG - move1;

			long long minM = min(move1, move2);

			cout << maxG << " " << minM << "\n";
		}
	}
	
	return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		long long n;
		cin >> n;

		if ( n % 2 || n < 4 ) cout << -1 << "\n";
		else {
			long long cur1 = n / 6;
			if ( n % 6 != 0 ) cur1++;
			
			long long cur2 =  n / 4;

			cout << cur1 << " " << cur2 << "\n";
		}
	}

	return 0;
}
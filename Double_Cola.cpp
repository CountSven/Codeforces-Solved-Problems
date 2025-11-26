#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	long long n;
	cin >> n;

	if ( n == 1 ) cout << "Sheldon" << "\n";
	else if ( n == 2 ) cout << "Leonard" << "\n";
	else if  ( n == 3 ) cout << "Penny" << "\n";
	else if  ( n == 4 ) cout << "Rajesh" << "\n";
	else if  ( n == 5 ) cout << "Howard" << "\n";
	else {
		long long cur = 5, prev = cur, incr = 5;

		while ( cur < n ) {
			prev = cur;
			incr *= 2;
			cur += incr;
		}

		long long now = incr / 5;

		// cout << cur << " " << prev << " " << incr << " " << now << "\n";

		string s;
		int cnt = 0;

		for ( long long i = prev + now; i <= cur; i += now ) {
			// cout << i << " ";
			cnt++;

			if ( cnt == 1 ) s = "Sheldon";
			else if ( cnt == 2 ) s = "Leonard";
			else if ( cnt == 3 ) s = "Penny";
			else if ( cnt == 4 ) s = "Rajesh";
			else if ( cnt == 5 ) s = "Howard";

			if ( i >= n ) break;
		}
		// cout << "\n";

		cout << s << "\n";
	}

	return 0;
}
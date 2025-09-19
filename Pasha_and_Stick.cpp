#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	if ( n % 2 ) cout << 0 << "\n";
	else {
		int hf = n / 2;

		int cur1 = hf / 2;
		int cur2 = hf - cur1;

		swap( cur1, cur2 );

		int cnt = 0;

		while ( cur1 < hf ) {
			// cout << cur1 << " " << cur2 << "\n";

			if ( cur1 != cur2 ) cnt++;

			cur1++;
			cur2--;
		}

		cout << cnt << "\n";
	}

	return 0;
}
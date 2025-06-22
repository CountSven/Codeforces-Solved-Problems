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

		int cnt = 0;

		while ( n != 1 ) {
			if ( n % 6 == 0 ) {
				n /= 6;
				cnt++;
			}
			else if ( ( n * 2 ) % 6 == 0 ) {
				n = ( n * 2 ) / 6;
				cnt += 2;
			}
			else {
				cnt = -1;
				break;
			}
		}

		cout << cnt << "\n";
	}

	return 0;
}
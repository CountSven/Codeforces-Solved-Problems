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

		int cnt = 0;

		while ( n >= 10 ) {
			cnt += ( n - ( n % 10 ) );
			n = ( n / 10 ) + ( n % 10 );
		}

		int totF = cnt + n;

		cout << totF << "\n";
	}

	return 0;
}
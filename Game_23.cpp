#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	if ( m % n != 0 ) cout << -1 << "\n";
	else {
		m /= n;
		int cnt = 0;

		while ( m % 2 == 0 ) {
			cnt++;
			m /= 2;
		}
		while ( m % 3 == 0 ) {
			cnt++;
			m /= 3;
		}

		if ( m != 1 ) cout << -1 << "\n";
		else cout << cnt << "\n";
	}

	return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m, cnt = 0;
	cin >> n >> m;

	while ( n && m && ( n + m ) >= 3 ) {
		if ( n > m ) {
			n -= 2;
			m--;
		}
		else {
			m -= 2;
			n--;
		}
		cnt++;
	}

	cout << cnt << "\n";

	return 0;
}
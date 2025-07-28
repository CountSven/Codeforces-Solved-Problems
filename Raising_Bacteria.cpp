#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int x;
	cin >> x;

	int cnt = 0;

	while ( x > 0 ) {
		int cur = x % 2;
		cnt += cur;
		x /= 2;
	}

	cout << cnt << "\n";

	return 0;
}
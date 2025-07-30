#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, b;
	cin >> a >> b;

	int cnt = a;

	int cur = 0;

	while ( a >= b ) {
		a -= b;
		cnt++;
		cur++;
	}

	cur += a;

	while ( cur >= b ) {
		cur -= b;
		cnt++;
		cur++;
	}

	cout << cnt << "\n";

	return 0;
}
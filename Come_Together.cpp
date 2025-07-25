#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		long long a, b, c, d, e, f;
		cin >> a >> b >> c >> d >> e >> f;

		long long ans = 0;

		if ((c - a) * (e - a) > 0) ans += min(abs(c - a), abs(e - a));
		if ((d - b) * (f - b) > 0) ans += min(abs(d - b), abs(f - b));

	    cout << ans + 1 << "\n";
	}

	return 0;
}
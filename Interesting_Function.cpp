#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int l, r;
		cin >> l >> r;

		long long cnt = 0, val = 1;

		while ( val <= r ) {
			cnt += r / val;
			cnt -= l / val;
			val *= 10LL;
		}

		cout << cnt << "\n";
	} 

	return 0;
}
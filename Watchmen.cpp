#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	map<int, int> mp1, mp2;
	map<pair<int, int>, int> mp12;

	long long res = 0;

	while ( n-- ) {
		int x, y;
		cin >> x >> y;
		
		res += mp1[x];
		res += mp2[y];
		res -= mp12[{ x, y }];

		mp1[x]++;
		mp2[y]++;
		mp12[{ x, y }]++;
	}

	cout << res << "\n";

	return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	vector<pair<int, int>> p(n);

	for ( int i = 0; i < n; i++ ) cin >> p[i].first >> p[i].second;

	int cnt = 0;

	for ( int i = 0; i < n; i++ ) {
		int l = 0, r = 0, u = 0, d = 0;

		for ( int j = 0; j < n; j++ ) {
			if ( p[i].first == p[j].first && p[j].second < p[i].second ) d = 1;
			else if ( p[i].first == p[j].first && p[j].second > p[i].second ) u = 1;
			else if ( p[i].second == p[j].second && p[j].first < p[i].first ) l = 1;
			else if ( p[i].second == p[j].second && p[j].first > p[i].first ) r = 1;
		}

		if ( l && r && u && d ) cnt++;
	}

	cout << cnt << "\n";

	return 0;
}
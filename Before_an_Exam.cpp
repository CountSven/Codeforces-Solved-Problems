#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int d, req;
	cin >> d >> req;
	vector<pair<int, int>> v(d);

	for ( int i = 0; i < d; i++ ) cin >> v[i].first >> v[i].second;

	int sum = 0;
	
	vector<int> res(d);

	for ( int i = 0; i < d; i++ ) {
		res[i] = v[i].first;
		sum += res[i];
	}

	if ( sum > req ) cout << "NO" << "\n";
	else {
		for ( int i = 0; i < d; i++ ) {
			if ( sum < req ) {
				int init = res[i];
				int cur1 = v[i].second - v[i].first;
				int cur2 = req - sum;

				res[i] += min( cur1, cur2 );
				sum += ( res[i] - init );
			}
		}

		if ( sum < req ) cout << "NO" << "\n";
		else {
			cout << "YES" << "\n";
			for ( auto u : res ) cout << u << " ";
			cout << "\n";
		}
	}

	return 0;
}
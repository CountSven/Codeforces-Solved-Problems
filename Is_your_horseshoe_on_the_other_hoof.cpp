#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	map<int, int> mp;

	int a[4];

	for ( int i = 0; i < 4; i++ ){
		cin >> a[i];
		mp[a[i]]++;
	}

	bool isDone = false;
	int cnt = 0;

	for ( auto u : mp ){
		if ( u.second > 1 ){
			cnt += u.second - 1;
			isDone = true;
		}
	}

	if ( isDone ) cout << cnt << "\n";
	else cout << 0 << "\n";

	return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<long long> v = { 9, 90, 900, 9000, 90000, 900000, 9000000, 90000000, 900000000, 9000000000, 90000000000 };

	long long n, cnt = 0;
	cin >> n;

	for ( int i = 0; i < (int)v.size(); i++ ) {
		if ( n >= v[i] ) {
			cnt += ( v[i] * ( i + 1 ) );
			n -= v[i];
		}
		else {
			cnt += ( n * ( i + 1 ) );
			break;
		}
	}

	cout << cnt << "\n";

	return 0;
}
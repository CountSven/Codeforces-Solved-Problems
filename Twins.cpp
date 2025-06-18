#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	vector<int> v(n);

	int sum = 0;

	for ( int i = 0; i < n; i++ ) {
		cin >> v[i];
		sum += v[i];
	}

	sort( v.rbegin(), v.rend() );

	int sumDiff = 0, res = 0;

	for ( int i = 0; i < n; i++ ) {
		sumDiff += v[i];
		if ( sumDiff > sum / 2 ) {
			res = i + 1;
			break;
		}
	}

	cout << res << "\n";

	return 0;
}
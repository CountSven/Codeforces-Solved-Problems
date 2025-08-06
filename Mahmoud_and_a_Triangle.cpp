#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	long long n;
	cin >> n;
	vector<long long> v(n);

	for ( long long i = 0; i < n; i++ ) cin >> v[i];

	sort( v.begin(), v.end() );

	bool isPos =false;

	for ( int i = 0; i+2 < n; i++ ) {
		if ( v[i] + v[i+1] > v[i+2] ) {
			isPos = true;
			break;
		}
	}

	if ( isPos) cout << "YES" << "\n";
	else cout << "NO" << "\n";

	return 0;
}
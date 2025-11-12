#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;
	vector<int> v(m);

	while ( n-- ) {
		for ( int i = 0; i < m; i++ ) {
			int x;
			cin >> x;
			v[i] = max( v[i], x );
		}
	}

	long long sum = 0;

	for ( int i = 0; i < m; i++ ) sum += v[i];

	cout << sum << "\n";

	return 0;
}
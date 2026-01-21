#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n;
		cin >> n;
		vector<int> v(n), freq(40, 0);

		long long res = 0;

		for ( int i = 0; i < n; i++ ) {
			cin >> v[i];
			res += freq[__builtin_clz( v[i] )];
			freq[__builtin_clz( v[i] )]++;
		}

		cout << res << "\n";
	} 

	return 0;
}
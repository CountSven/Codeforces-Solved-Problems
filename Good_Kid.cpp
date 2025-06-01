#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ){
		int n;
		cin >> n;
		vector<int> v(n);

		for ( int i = 0; i < n; i++ ) cin >> v[i];

		sort( v.begin(), v.end() );
		
		v[0]++;

		int prod = 1;

		for ( auto u : v ) prod *= u;

		cout << prod << "\n";
	}

	return 0;
}
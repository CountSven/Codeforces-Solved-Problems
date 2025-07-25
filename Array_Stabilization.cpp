#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	vector<int> v(n);

	for ( int i = 0; i < n; i++ ) cin >> v[i];

	sort( v.begin(), v.end() );

	int mn1 = *( v.end() - 2 ) - v.front();
	int mn2 = v.back() - *( v.begin() + 1 );

	// cout << mn1 << " " << mn2 << "\n";

	cout << min( mn1, mn2 ) << "\n";

	return 0;
}
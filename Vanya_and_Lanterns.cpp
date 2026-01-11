#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, l;
	cin >> n >> l;
	vector<int> v(n);

	for ( int i = 0; i < n; i++ ) cin >> v[i];

	v.push_back(0);  	
	v.push_back(l);

	sort( v.begin(), v.end() );

	double dist = max( v[1] - v[0], v[n+1] - v[n] );

	for ( int i = 2; i+1 < (int)v.size(); i++ ) dist = max( dist, ( (1.0) * ( v[i] - v[i-1] ) / 2 ) );

	cout << fixed << setprecision(12) << dist << "\n";  	

	return 0;
}
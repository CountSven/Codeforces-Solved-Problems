#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, m;
		cin >> n >> m;
		string s;
		cin >> s;
		vector<int> v(m), freq( 1e5+1, 0 ), ind;

		for ( int i = 0; i < m; i++ ) {
			cin >> v[i];
			if ( !freq[v[i]] ) {
				ind.push_back( v[i] );
				freq[v[i]] = 1;
			}
		}

		sort( ind.begin(), ind.end() );

		string c;
		cin >> c;

		sort( c.begin(), c.end() );

		// cout << (int)c.size() << " " << (int)ind.size() << "\n";
		
		while ( (int)c.size() > (int)ind.size() ) c.pop_back();

		for ( int i = 0, j = 0; i < (int)ind.size(); i++, j++ ) s[ind[i]-1] = c[j];

		cout << s << "\n"; 
	}

	return 0;
}
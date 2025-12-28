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
		vector<int> v(2*n), evI, odI;

		for ( int i = 0; i < 2*n; i++ ) {
			cin >> v[i];

			if ( v[i] % 2 ) odI.push_back( i+1 );
			else evI.push_back( i+1 );
		}

		int cur = n-1;

		while ( cur-- ) {
			int f, s;

			if ( odI.size() >= 2 ) {
				s = odI.back();
				odI.pop_back();
				f = odI.back();
				odI.pop_back();
			}
			else if ( evI.size() >= 2 ) {
				s = evI.back();
				evI.pop_back();
				f = evI.back();
				evI.pop_back();
			}
			
			cout << f << " " << s << "\n";
		}
	}

	return 0;
}
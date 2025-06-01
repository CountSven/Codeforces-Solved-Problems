#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ){
		int n, m;
		cin >> n >> m;

		int ts = 0;
		int cnt = 0;

		for ( int i = 1; i <= n; i++ ){
			string s;
			cin >> s;
			int sz = s.size();
			cnt += sz;
			if ( cnt <= m ){
				ts = i;
			}
		}

		cout << ts << "\n";
	}

	return 0;
}
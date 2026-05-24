#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, cnt = 0;
		cin >> n;

		long long sum = 0;

		set<long long> st = { sum };

		while ( n-- ) {
			int x;
			cin >> x;
			sum += x;

			if ( st.find( sum ) != st.end() ) {
				cnt++;
				sum = 0;
				st = { sum };
			}
			else st.insert( sum );
		}

		cout << cnt << "\n";
	}

	return 0;
}
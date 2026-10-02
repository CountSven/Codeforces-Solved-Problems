#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	set<long long> st = { 0LL };

	long long sum = 0, cnt = 0;

	for ( int i = 0, x; i < n; i++ ) {
		cin >> x;
		sum += x;
		if ( st.count( sum ) ) {
			cnt++;
			sum = x;
			st = { 0LL, sum };
		}
		else st.insert( sum );
		// cout << i << " " << cnt << "\n";
	}

	cout << cnt << "\n";

	return 0;
}
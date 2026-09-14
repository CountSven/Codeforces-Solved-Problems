#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	long long k, cur = 1;
	cin >> k;

	vector<long long> cnt(10, 1);

	int i = 0;

	while ( cur < k ) {
		cur /= cnt[i]++;
		cur *= cnt[i++];
		i %= 10;
	}

	string s = "codeforces";

	for ( int i = 0; i < 10; i++ ) {
		long long tmp = cnt[i];
		while ( tmp-- ) cout << s[i];
	}
	cout << "\n";

	return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	long long n, res = 0;
	cin >> n;

	for ( long long i = 1; i <= n; i++ ) {
		long long cur = i, now = 1;
		while ( cur-- ) now *= 2;
		res += now;
	}

	cout << res << "\n";	

	return 0;
}
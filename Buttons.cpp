#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	long long cnt = 0;

	for ( int i = 1; i < n; i++ ) cnt += ( i * ( n - i ) );

	cnt += n;

	cout << cnt << "\n";

	return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	int a[n];

	int cnt = 0, maxCnt = 0;

	for ( int i = 0; i < n; i++ ) {
		cin >> a[i];
		if ( a[i] != cnt ) maxCnt++;
		cnt = a[i];
	}

	cout << maxCnt << "\n";

	return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	int a[n];

	int cntP = 0, ans = 0;

	for ( int i = 0; i < n; i++ ) {
		cin >> a[i];
		if ( a[i] > 0 ) cntP += a[i];

		if ( a[i] == -1 && !( cntP > 0 ) ) ans++;

		if ( a[i] == -1 && cntP > 0 ) cntP--;
	}

	cout << ans << "\n";

	return 0;
}
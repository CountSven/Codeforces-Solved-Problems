#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	vector<int> a(n), b(n), v1(n), v2(n), v3(n);


	for ( int i = 0; i < n; i++ ) {
		cin >> a[i];
		a[i]--;
		v1[a[i]] = i;
	}

	for ( int i = 0; i < n; i++ ) {
		cin >> b[i];
		b[i]--;
		v2[b[i]] = i;
	}

	int mx = 0;

	for ( int i = 0; i < n; i++ ) {
		int cur = ( v1[i] - v2[i] + n ) % n;
		mx = max( mx, ++v3[cur] );
	}

	cout << mx << "\n";

	return 0;
}
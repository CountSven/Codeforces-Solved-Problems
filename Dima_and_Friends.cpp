#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	int a[n];

	int sum = 0;

	for ( int i = 0; i < n; i++ ) {
		cin >> a[i];
		sum += a[i];
	}

	n++;

	int cnt = 0;

	if ( ( sum + 1 ) % n != 1 ) cnt++;
	if ( ( sum + 2 ) % n != 1 ) cnt++;
	if ( ( sum + 3 ) % n != 1 ) cnt++;
	if ( ( sum + 4 ) % n != 1 ) cnt++;
	if ( ( sum + 5 ) % n != 1 ) cnt++;

	cout << cnt << "\n";

	return 0;
}
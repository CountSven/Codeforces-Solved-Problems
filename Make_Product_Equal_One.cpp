#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	int a[n];

	long long cnt = 0, Zer = 0, sum = 1;

	for ( int i = 0; i < n; i++ ) {
		cin >> a[i];
		if ( a[i] == 0 ) Zer++;
		else if ( a[i] < 0 ) sum *= -1;
		cnt += abs( abs( a[i] ) - 1 );
	}

	if ( sum == -1 && Zer == 0 ) cnt += 2;

	cout << cnt << "\n";

	return 0;
}
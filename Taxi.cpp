#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	int a[n];

	int one = 0, two = 0, three = 0, four = 0;

	for ( int i = 0; i < n; i++ ) {
		cin >> a[i];

		if ( a[i] == 1 ) one++;
		else if ( a[i] == 2 ) two++;
		else if ( a[i] == 3 ) three++;
		else four++;
	}

	int cnt = four;

	if ( three == one ) {
		cnt += one;
		three = 0;
		one = 0;
	}
	else if ( three > one ) {
		cnt += one;
		three -= one;
		one = 0;
	}
	else {
		cnt += three;
		one -= three;
		three = 0;
	}

	cnt += three;

	if ( two >= 2 ) {
		int cur = ( two * 2 ) / 4;
		cnt += cur;
		two -= ( cur * 2 ); 
	}

	if ( two && one ) {
		if ( one == 1 ) {
			cnt++;
			two = 0;
			one = 0;
		}
		else {
			cnt++;
			two = 0;
			one -= 2;
		}
	}

	cnt += two;

	if ( one >= 4 ) {
		int cur = one / 4;
		cnt += cur;
		one -= ( cur * 4 );
	}

	if ( one ) cnt++;

	cout << cnt << "\n";

	return 0;
}
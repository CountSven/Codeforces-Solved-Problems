#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	string a, b;
	cin >> n >> a >> b;

	char c;
	int pos = -1, cnt = 0;

	for ( int i = 0; i < n; i++ ) {
		if ( a[i] == b[i] ) continue;
		if ( pos == -1 ) {
			c = a[i];
			pos = i;
		}
		else if ( a[i] != a[pos] ) {
			if ( i - pos == 1 ) {
				cnt++;
				pos = -1;
			}
			else {
				cnt++;
				c = a[i];
				pos = i;
			}
		}
		else if ( a[i] == a[pos] ) {
			cnt++;
			c = a[i];
			pos = i;
		}
	}

	if ( pos != -1 ) cnt++;

	cout << cnt << "\n";

	return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	while ( n-- ) {
		int x;
		cin >> x;

		int res = 15;

		for ( int i = 0; i <= 15; i++ ) {
			int val = ( x + i ) % 32768, cur = i;

			while ( val != 0 ) {
				val *= 2;
				val %= 32768;
				cur++;
			}

			res = min( res, cur );
		}

		cout << res << "\n";
	}
		
	return 0;
}
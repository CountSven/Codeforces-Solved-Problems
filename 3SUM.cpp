#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin >> n;
	vector<int> cnt(10, 0);

	for ( int i = 0; i < n; i++ ) {
		int x;
		cin >> x;
		cnt[x % 10]++;
	}

	// for ( int i = 0; i < 10; i++ ) {
	// 	cout << i << " " << cnt[i] << "\n";
	// }

	for ( int a = 0; a <= min( 2, cnt[0] ); a++ ) {
		for ( int b = 0; b <= min( 3, cnt[1] ); b++ ) {
			for (int c = 0; c <= min( 2, cnt[2] ); c++ ) {
				for ( int d = 0; d <= min( 2, cnt[3] ); d++ ) {
					for ( int e = 0; e <= min( 2, cnt[4] ); e++ ) {
						for ( int f = 0; f <= min( 2, cnt[5] ); f++ ) {
							for ( int g = 0; g <= min( 2, cnt[6] ); g++ ) {
								for ( int h = 0; h <= min( 2, cnt[7] ); h++ ) {
									for ( int i = 0; i <= min( 2, cnt[8] ); i++ ) {
										for ( int j = 0; j <= min( 2, cnt[9] ); j++ ) {
											if ( a + b + c + d + e + f + g + h + i + j == 3 ) {
												int cur = ( a * 0 ) + ( b * 1 ) + ( c * 2 ) + ( d * 3 ) + ( e * 4 ) + ( f * 5 ) + ( g * 6 ) + ( h * 7 ) + ( i * 8 ) + ( j * 9 );
												// cout << cur << "\n";
												if ( ( cur % 10 ) == 3 ) {
													cout << "YES" << "\n";
													return;
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}

	cout << "NO" << "\n";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) solve();

	return 0;
}
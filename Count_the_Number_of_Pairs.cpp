#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, k;
		cin >> n >> k;
		string s;
		cin >> s;

		vector<int> mpl(26), mpu(26);

		int cnt = 0;

		for ( int i = 0; i < n; i++ ) {
			if ( islower( s[i] ) ) mpl[s[i] - 'a']++;
			else mpu[s[i] - 'A']++;
		}

		for ( int i = 0; i < 26; i++ ) {
			while ( k && mpl[i] - mpu[i] <= -2 ) {
				k--;
				mpl[i]++;
				mpu[i]--;
			}
			while ( k && mpl[i] - mpu[i] >= 2 ) {
				k--;
				mpl[i]--;
				mpu[i]++;
			}

			cnt += min( mpl[i], mpu[i] );
		}

		cout << cnt << "\n";
	}

	return 0;
}
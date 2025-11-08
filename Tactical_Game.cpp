#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int cnt = 0;

        bool isDone = false;

        for ( int i = 1; i+1 < n; i++ ) {
            if ( s[i-1] == '1' && s[i] == '1' && s[i+1] == '1' ) {
                cnt++;
                s[i-1] = '0';
                s[i] = '0';
                s[i+1] = '0';
                isDone = true;
                break;
            }
        }

        if ( !isDone ) {
            for ( int i = 1; i < n; i++ ) {
                if ( s[i-1] == '1' && s[i] == '1' ) {
                    cnt++;
                    s[i-1] = '0';
                    s[i] = '0';
                    isDone = true;
                    break;
                }
            }
        }

        for ( int i = 0; i < n; i++ ) {
            if ( s[i] == '1' ) cnt++;
        }

        cout << cnt << "\n";
    }

	return 0;
}
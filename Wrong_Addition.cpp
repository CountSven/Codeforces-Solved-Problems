#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t;
	cin >> t;

	while ( t-- ) {
		string a, s, b = "";
		cin >> a >> s;

		reverse( a.begin(), a.end() );
		reverse( s.begin(), s.end() );

		int szA = (int)a.size(), szS = (int)s.size();

		int i = 0, j = 0, f = 0;

		while ( i < szS ) {
			if ( j < szA ) {
				if ( s[i] >= a[j] ) {
					// cout << i << " " << s[i] << " " << a[j] << "\n";
					int diff = ( s[i] - '0' ) - ( a[j] - '0' );
					b += ( diff + '0' );
					i++;
					j++;
				}
				else {
					// cout << i << " " << s[i] << " " << a[j] << "\n";
					if ( i + 1 < szS ) {
						if ( s[i+1] == '1' ) {
							// cout << i << " " << s[i] << " " << a[j] << "\n";
							int cur = 10 + ( s[i] - '0' );
							int diff = cur - ( a[j] - '0' );
							b += ( diff + '0' );
							i += 2;
							j++;
						}
						else {
							f = 1;
							break;
						}
					}
					else {
						f = 1;
						break;
					}
				}
			}
			else {
				b += s[i];
				i++;
			}
		}

		if ( f || j < szA ) cout << -1 << "\n";
		else {
			reverse( b.begin(), b.end() );

			long long val = stoll( b );

			cout << val << "\n";
		}
	}

	return 0;
}
#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int a, b;
	string s;
	cin >> a >> b >> s;
 
	int n = a + b;
	 
	s = "0" + s;
 
	for (int i = 1; i <= n; i++){
		if (s[i] != s[n + 1 - i] && s[i] != '?' && s[n + 1 - i] != '?'){
			cout << -1 << "\n";
			return;
		}
 
		if (s[i] != s[n + 1 - i]){
			if (s[i] == '?') s[i] = s[n + 1 - i];
			else if (s[n + 1 - i] == '?') s[n + 1 - i] = s[i];
		}
	}

	int cnt0 = 0, cnt1 = 0;
	for (int i = 1; i <= n; i++){
		if (s[i] == '?'){
			if (i != (n + 1 - i))
			cnt0++;
			else cnt1++;
		}
		else if (s[i] == '0') a--;
		else b--;
	}
 
	cnt0 /= 2;
 
	if (a < 0 || b < 0){
		cout << -1 << "\n";
		return;
	}
 
	if (cnt1 != 0){
		if (a % 2 == 1){
			s[(n + 1) / 2] = '0';
			a--;
		} else if (b % 2 == 1) {
			s[(n + 1) / 2] = '1';
			b--;
		} else {
			cout << -1 << "\n";
			return;
		}
	}
 
	if (a % 2 == 1 || b % 2 == 1){
		cout << -1 << "\n";
		return;
	}
 
	for (int i = 1; i <= n; i++){
		if (s[i] == '?'){
			if (a > 0){
				a -= 2;
				s[i] = '0';
				s[n + 1 - i] = '0';
			} else {
				b -= 2;
				s[i] = '1';
				s[n + 1 - i] = '1';
			}
		}
	}
 
	for (int i = 1; i <= n; i++) cout << s[i];
	cout << "\n";
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
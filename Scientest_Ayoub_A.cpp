#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	int lst = 1;

	for ( int i = 1; i <= n; i++ ) {
		lst = lst * 2;
		cout << lst << " ";
	}
	cout << "\n";

	return 0;
}
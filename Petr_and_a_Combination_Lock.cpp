#include<bits/stdc++.h>
using namespace std;

bool ans = false;
 
int n;
int a[20];
 
void dfs(int pos, int x){
	if(pos == n){
		if(abs(x) % 360 == 0) ans = true;
	} else {
		dfs(pos + 1, x + a[pos]);
		dfs(pos + 1, x - a[pos]);
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n;

	for ( int i = 0; i < n; i++ ) cin >> a[i];

	dfs( 0, 0 );

	if ( ans ) cout << "YES" << "\n";
	else cout << "NO" << "\n";

	return 0;
}
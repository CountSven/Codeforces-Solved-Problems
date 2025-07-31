#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m; 
	cin >> n >> m;

    int low = (n+2*m-1)/(2*m);
    int high = n/m;

    if ( low > high ) cout<<-1<<'\n';
    else cout << low*m << "\n";

	return 0;
}
#include<bits/stdc++.h>
using namespace std;

int n, m;
vector<int> dist( 2e4+5, -1 );
queue<int> q;

void bfs( int n )
{
	dist[n] = 0;

	q.push( n );

	while ( !q.empty() ) {
		int u = q.front();
		q.pop();

		int v = 2 * u;

		if ( v <= 2e4 && dist[v] == -1 ) {
			dist[v] = dist[u] + 1;
			q.push( v );
		}

		v = u - 1;

		if ( v >= 1 && dist[v] == -1 ) {
			dist[v] = dist[u] + 1;
			q.push( v );
		}
	} 
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n >> m;

	if ( n >= m ) cout << n - m << "\n";
	else {
		bfs( n );
		cout << dist[m] << "\n";
	}

	return 0;
}
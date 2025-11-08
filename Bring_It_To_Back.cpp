#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
    cin >> t;

    while (t--) {
        long long N, M;
        cin >> N >> M;

        if (N == 2) {
            if (M % 2 == 0)
                cout << "1 2\n";
            else
                cout << "2 1\n";
            continue;
        }

        if (M >= N) {
            for (long long i = N; i >= 1; i--)
                cout << i << " ";
            cout << "\n";
            continue;
        }

        for (long long i = N; i > N - M; i--)
            cout << i << " ";
        
        for (long long i = 1; i <= N - M; i++)
            cout << i << " ";
        cout << "\n";
    }

	return 0;
}
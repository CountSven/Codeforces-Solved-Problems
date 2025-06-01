#include<stdio.h>

const int mx = 2e8 + 123;
bool isPerfectSquare[mx];

int main()
{
    int n;
    scanf("%d", &n);

    for( int c = 1; c <= n; c++ ) isPerfectSquare[c * c] = 1;

    int cnt = 0;

    for ( int a = 1; a < n; a++ ) {
        for ( int b = a; b < n; b++ ) {
            int v = ( a * a ) + ( b * b );
            if (isPerfectSquare[v]) cnt++;
        }
    }

    printf("%d\n", cnt);

    return 0;
}

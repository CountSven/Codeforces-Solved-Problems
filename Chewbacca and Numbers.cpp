#include<stdio.h>
#include<string.h>

int main()
{
    char a[30];
    scanf("%s", a);

    int temp = a[0];
    int len = strlen(a);

    for ( int i = 0; i < len; i++ ) {
        int t = a[i] - '0';
        int revDigit = 9 - t;

        if ( revDigit < t ) {
            a[i] = revDigit + '0';
        }
    }

    if ( a[0] == '0' ) a[0] = temp;

    for ( int i = 0; i < len; i++ ) printf("%c", a[i]);

    return 0;
}

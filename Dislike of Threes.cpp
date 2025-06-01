#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--) {
        int k;
        scanf("%d", &k);

        int i = 1;
        int cnt = 0;

        while (1) {
            if ( i % 10 != 3 && i % 3 != 0 ) {
                cnt++;

                if ( k == cnt ) {
                    printf("%d\n", i);
                    break;
                }
            }

            i++;
        }
    }

    return 0;
}

/* ******************************************************
 *                                                      *
 *            Author: Emre AKT�RK                       *
 *                                                      *
 *            Mail: mail@emreakturk.com                 *
 *                                                      *
 *            Compiler: gcc                             *
 *                                                      *
 * ******************************************************
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, sayac;

    printf("N Sayisini Giriniz:"); scanf("%d", &n);

    for (i=1;i<=n;i++){
        for (sayac=1;sayac<=i;sayac++){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    system("PAUSE");
    return 0;
}

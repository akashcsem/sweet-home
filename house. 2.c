

#include<stdio.h>
int main()
{
    int n, i, j;
    printf("\n Enter the size of house (4-20) : ");
    scanf("%d", &n);

    system("cls");
    printf("\n");

    for(i=1; i<=n; i++) {
        for (j=1; j<=n-i; j++)
            printf("  ");
        for (j=1; j<=i; j++)
            printf("   ^");
        printf("\n");
    }

    for (i=1; i<=2*n+1; i++)
        printf(" *");
    printf("\n");

    for (i=1; i<=n; i++){
        printf(" *");
        for (j=1; j<=n-1; j++)
            printf("  ");
        printf("*|*");

        for (j=1; j<=n-1; j++)
            printf("  ");
        printf("*\n");
    }

    for (i=1; i<=2*n+1; i++)
        printf(" *");
    printf("\n *");

    for (j=1; j<=n-1; j++)
        printf("  ");
    printf(" *");

    for (j=1; j<=n-1; j++)
        printf("  ");
    printf(" *\n");

    for (i=1; i<=2*n+1; i++)
        printf(" *");
    printf("\n");

    for(i=1; i<=n-2; i++)
        printf("  ");
    printf("xxxxxxxxxx\n");

    for (i=1; i<=n-1; i++)
        printf("  ");
    printf("xxxxxx\n\n");


    printf("\tHi, NAHIDA. \n\tI make the sweet home only for you, \n\tMiss you mamuni, Your mama Akash.");

    getch();
}


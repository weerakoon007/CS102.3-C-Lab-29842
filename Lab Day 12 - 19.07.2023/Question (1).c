#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c,d,e[3][3];
    printf("Array 1\n");
    for(c=0;c<3;c++){
        for (d=0;d<3;d++)
        {
            printf("Enter Value For The Position [%d][%d] - ",c+1,d+1);
            scanf("%d",&a[c][d]);
        }
    }
    printf("\nArray 2\n");
    for(c=0;c<3;c++)
    {
        for (d=0;d<3;d++)
        {
            printf("Enter Value For The Position [%d][%d] - ",c+1,d+1);
            scanf("%d",&b[c][d]);
        }
    }
    for(c=0;c<3;c++)
    {
        for (d=0;d<3;d++)
        {
            e[c][d]= a[c][d] + b[c][d];
        }
    }
    for (d=0;d<3;d++)
    {
        printf("%d ",a[0][d]);
    }
    printf("   ");
    for (d=0;d<3;d++)
    {
        printf("%d ",b[0][d]);
    }
    printf("   ");
    for (d=0;d<3;d++)
    {
        printf("%d ",e[0][d]);
    }
    printf("\n");
    for (d=0;d<3;d++)
    {
        printf("%d ",a[1][d]);
    }
    printf(" + ");
    for (d=0;d<3;d++)
    {
        printf("%d ",b[1][d]);
    }
    printf(" = ");
    for (d=0;d<3;d++)
    {
        printf("%d ",e[1][d]);
    }
    printf("\n");
    for (d=0;d<3;d++)
    {
        printf("%d ",a[2][d]);
    }
    printf("   ");
    for (d=0;d<3;d++)
    {
        printf("%d ",b[2][d]);
    }
    printf("   ");
    for (d=0;d<3;d++)
    {
        printf("%d ",e[2][d]);
    }
    printf("\n");
}

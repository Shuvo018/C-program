#include<stdio.h>

int main()
{
    int a[10][10];
    int b[10][10];

    int r,c,i,j;
    printf("Enter row & column : ");
    scanf("%d %d",&r,&c);
//frist matrix
    printf("Frist matrix\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
//second matrix
    printf("Second matrix\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("[%d][%d] = ",i,j);
            scanf("%d",&b[i][j]);
        }
    }

    addMatrix(a,b,r,c);

    return 0;
}
void addMatrix(int a[10][10],int b[10][10],int r,int c)
{
    int add[10][10];
    int i,j;
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            add[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("sum matrix\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d ",add[i][j]);
        }
        printf("\n");
    }

}

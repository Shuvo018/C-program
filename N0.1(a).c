
//1+x^2/2! + x^4/4!...n
#include<stdio.h>
int main()
{
    double sum=1,fact=1,po;
    int i,j=1,x,n;
    printf("Enter a value of x : ");
    scanf("%d",&x);

    printf("Enter a value of terms : ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        if(i==1)
        {
            printf("%.1lf",sum);
        }
        else
        {
            if(i%2==0)
            {
                while(j<=i)
                {
                    fact *= j;
                    j++;
                }
                printf(" + x^%d/%d!",i,i);
                po = pow(x,i);
                sum += (po/fact);
            }
        }

    }
    printf("\nTotal sum : %lf",sum);

    return 0;
}

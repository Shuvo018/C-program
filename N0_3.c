#include<stdio.h>
int main()
{
    int a[10];
    int n,i;
    printf("Enter a value of n : ");
    scanf("%d",&n);
    printf("Enter a value of array : \n");
    for(i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
    }

    mean(a,n);
    median(a,n);
    variance(a,n);
    mode(a,n);

    return 0;

}

void mean(int a[],int n)
{

    int i,sum=0;
    double mean;
    for(i=0; i<n; i++)
    {
        sum += a[i];
    }
    mean = sum/n;
    printf("The mean value is : %.2lf\n",mean);
}
void median(int a[],int n)
{
    int i,med,div;
    for(i=0; i<=n/2; i++)
    {
        med = a[i];
    }
    if(n%2==0)
    {
        div = (med+a[i-2])/2;
        printf("The median is : %d  %d = %d\n",a[i-2],med,div);
    }
    else
        printf("The median is : %d\n",med);

}
void variance(int a[],int n)
{
    int i,sum=0;
    double aver,var=0;
    for(i=0; i<n; i++)
    {
        sum += a[i];
    }
    aver = sum/n;

    for(i=0; i<n; i++)
    {
        var += (pow(a[i]-aver,2))/n;
    }
    printf("The variance is : %.2lf\n",var);
}

void mode(int a[],int n)
{
    int i,j;
    printf("The mode value is : ");
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; ++j)
        {
            if(a[i]==a[j])
            {
                printf("%d ",a[j]);
            }

        }
    }
}


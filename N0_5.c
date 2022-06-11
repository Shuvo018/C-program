#include<stdio.h>
int main()
{
    //{2,3,4,5,1,2,2,6}
    int arr[10];
    int n,i;
    printf("Enter a number : ");
    scanf("%d",&n);

    printf("Enter a number of array : \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nprint array : ");
    printAr(arr,n);

    printf("\nreverse array : ");
    rev(arr,n);

    printf("\nDelete duplicates value : ");
    DelDupli(arr,n);

    return 0;
}
void printAr(int a[],int n)
{
    int i;
    for(i=0; i<n; i++)
        printf("%d ",a[i]);
}
void rev(int arr[],int n)
{

    int reverse,i;
    for(i=0; i<n/2; i++)
    {
        reverse = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = reverse;
    }
    for(i=0; i<n; i++)
        printf("%d ",arr[i]);
}
void DelDupli(int a[],int n)
{
    int i,j,min_index,temp;
    //sorting array
    for(i=0; i<n; i++)//543
    {
        min_index = i;
        for(j=i+1; j<n; j++)
        {
            if(a[j] < a[min_index])
            {
                min_index = j;
            }
        }
        temp = a[i];
        a[i] = a[min_index];
        a[min_index] = temp;
    }

    //delete duplicate array & print array
    for(i=0; i<n; i++)
    {
        if(a[i]==a[i+1])
            continue;
        printf("%d ",a[i]);
    }

}

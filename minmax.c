#include<stdio.h>
int main()
{
    int a[100],i,n,min,max;
    printf("Enter how many element you want :");
    scanf("%d",&n);
    printf("Enter elements in array :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=max=a[0];
    for(i=1; i<n;i++)
    {
     if(min>a[i])
            min=a[i];
     if(max<a[i])
            max=a[i];
    }
    printf("Minimum of array is :%d",min);
    printf("\nMaximum of array is :%d",max);
    return 0;
}



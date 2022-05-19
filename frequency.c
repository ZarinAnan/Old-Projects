#include<stdio.h>
int main()
{
    int arr[100],i,n,min,max,value;
    printf("Enter how many element you want :");
    scanf("%d",&n);
    printf("Enter elements in array :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=1; i<n;i++)
    {
     if(arr[0]<arr[i])
            arr[0]=arr[i];
    }

    printf("\nMaximum of array is :%d",arr[0]);
    printf("\nEnter the value to insert\n");
    scanf("%d",&value);
    //for(i=n;i<max-1;i++)
        //a[value]=a[i];

    return 0;
}




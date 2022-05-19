#include<stdio.h>
int main()
{
    int Arr[]= {7,0,1,2,0,3,0,4,2,3,0,3,2,1,2};
    int i,num,index;

    printf("Enter the element:");
    scanf("%d",&num);

    for(i=0; i<15; i++)
    {
        if(Arr[i]==num)
        {
            index=i;
            break;

        }
    }
    printf("\n Found the location",index);
    return 0;


}


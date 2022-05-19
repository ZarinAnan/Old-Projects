#include<stdio.h>
int main()
{
    int n,i,sum1=0,sum2=0;
    float awt,atat;
    printf("Enter the size of process:");
    scanf("%d",&n);
    int process[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&process[i]);
    }
    int burst[n];
    printf("Enter the burst size:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&burst[i]);
    }
    int wt[n];
    wt[0]=0;
    for(i=1;i<n;i++)
    {
        wt[i]=wt[i-1]+burst[i-1];
    }
    printf("Waiting time:\n ");
    for(i=0;i<n;i++)
    {
        printf("%d\n",wt[i]);
        sum1=sum1+wt[i];

    }
    awt=(float)sum1/n;
    printf("\nAverage waiting time is =%.2lf:",awt);

    int tat[n];
    for(i=0;i<n;i++)
    {
      tat[i]=wt[i]+burst[i];
    }
     printf("\nTurnaround time:\n ");
    for(i=0;i<n;i++)
    {
        printf("%d\n",tat[i]);
        sum2=sum2+tat[i];

    }
    atat=(float)sum2/n;
    printf("\nAverage turnaround time is =%.2lf:",atat);


    return 0;
}

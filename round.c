#include<stdio.h>
#include<stdbool.h>
int main()
{
    int n,i,sum1=0,sum2=0,time_quantum,total;
    int waiting[100],totalWaiting=0;
    float awt,atat;
    printf("Enter the Process length : ");
    scanf("%d",&n);

    int process[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&process[n]);
    }
    printf("Enter the burst time : ");
    int Burst_time[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&Burst_time[i]);
    }
    printf("\nEnter the time quantum :");
    scanf("%d",&time_quantum);

    int remaintime[n];
    for(int i=0;i<n;i++)
    {
        remaintime[i]=Burst_time[i];
    }
    int t=0;
    while(1)
    {
        bool done=true;
        for(int i=0;i<n;i++)
        {
            if(remaintime[i]>0)
            {
                done=false;
                if(remaintime[i] > time_quantum)
                {
                    t=t+time_quantum;
                    remaintime[i]=remaintime[i]-time_quantum;
                }
                else
                {
                    t=t+remaintime[i];
                    waiting[i]=t-Burst_time[i];
                    totalWaiting=totalWaiting+waiting[i];
                    remaintime[i]=0;
                }
            }
        }
        if(done==true)
            break;
    }


     printf("Waiting time:\n ");
    for(i=0;i<n;i++)
    {
        printf("%d\n",waiting[i]);
        sum1=sum1+waiting[i];

    }




        awt=(float)sum1/n;
    printf("\nAverage waiting time is =%.2lf:",awt);

    int tat[n];
    for(i=0;i<n;i++)
    {
      tat[i]=waiting[i]+Burst_time[i];
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


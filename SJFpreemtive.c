#include<stdio.h>
int main()
{
    int arrival_time[100],burst_time[100],temp[10];
    int i,smallest,count=0,time,n;
    double wait_time=0, turnaround_time=0,end;

    float average_waiting_time,average_turnaround_time;
    printf("Enter the size of process:\t");
    scanf("%d",&n);
    printf("\nEnter Details of %d Process",n);
    {
        printf("\nEnter Arrival time:\t");
        scanf("%d", &arrival_time[i]);
        printf("Enter Burst Time:\t");
        scanf("%d",&burst_time[i]);
        temp[i]=burst_time[i];
    }
    burst_time[9]=9999;
    for(time=0; count!=n; time++)
    {
        smallest=9;
        for(i=0; i<n; i++)
              {
                  if(arrival_time[i] <= time && burst_time[i] < burst_time[smallest] && burst_time[i] > 0)
                  {
                        smallest = i;
                  }
            }
            burst_time[smallest]--;
            if(burst_time[smallest] == 0)
            {
                  count++;
                  end = time + 1;

                  wait_time = wait_time + end - arrival_time[smallest] - temp[smallest];
                  turnaround_time = turnaround_time + end - arrival_time[smallest];
            }
      }
      average_waiting_time = wait_time / n;
      average_turnaround_time = turnaround_time / n;
      printf("\n\nAverage Waiting Time:\t%lf\n", average_waiting_time);
      printf("Average Turnaround Time:\t%lf\n", average_turnaround_time);
      return 0;
}

#include<stdio.h>
int main(){
int n,i,sum1=0,sum2=0;
float aw,atat;
printf("Enter the process number:");
scanf("%d",&n);
int p[n];
for(i=0;i<n;i++){
    scanf("%d",&p[n]);
}
printf("Enter the burst time:");
int bt[n];
for(i=0;i<n;i++){
    scanf("%d",&bt[i]);
}
    int wt[n];
      wt[0]=0;
    for(i=1;i<n;i++){

            wt[i]=wt[i-1]+bt[i-1];
        }
    printf("Waiting time:");
    for(i=0;i<n;i++){
        printf("%d ",wt[i]);
        sum1=sum1+wt[i];
    }

       aw=(float)sum1/n;
    printf("\nAverage waiting time:%f",aw);

  int tat[n];
  for(i=0;i<n;i++){
    tat[i]=wt[i]+bt[i];
  }
  printf("\nTurnaround time:");
    for(i=0;i<n;i++){
        printf("%d ",tat[i]);
        sum2=sum2+tat[i];
    }
    atat=(float)sum2/n;
    printf("\nAverage turnaround time:%f",atat);
}

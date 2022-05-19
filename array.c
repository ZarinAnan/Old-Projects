#include<stdio.h>
int main()
{

int a[1000],n,i,t,j,max=0,c=0,mode=0;
float s=0,mean,median;
printf("Enter how many number ");
scanf("%d",&n);
printf(" Enter %d Data:\n",n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
    s+=a[i];
}
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        if(a[i]<a[j])
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
}
mean=s/(float)n;
printf("Mean is: %.lf\n",mean);

if(n%2==0)
median=((a[(n-1)/2]+a[(n-1)/2+1])/2.0);
else
    median=((a[(n-1)/2])/2.0);
printf("median is: %.lf",median);
for(i=0;i<n;i++)
{
    t=a[i];
    c=0;
    for(j=0;j<n;j++)
    {
        if(t==a[j])c++;
        if(c>max)
        {
            max=c;
            mode=t;
        }

    }
}
printf("\nmode is %d",mode);


return 0;

}


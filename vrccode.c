#include<stdio.h>
#include<conio.h>
void parity(int[]);
char chr;
int arr[9],arr1[9];
//int main()
void main()
{
    char chr,chr1;
    printf("Enter the data");
    scanf("%c%c",&chr,&chr1);
    void parity(int a[])
{
            int count;
            count=0;
            int i,arr[9];
            for(i=0;i<8;i++)
            {
                        if(a[i]==1)
                                    count++;
            }
            if(count%2==0)
                        a[8]=0;
            else
                        a[8]=1;
            count=0;
            printf("Receiver Side :\n");
            printf("\n\nVRC : \n");
            for(i=0;i<9;i++)
                        {
                                    if(i==8)
                                                printf(" | ");
                                    printf("%d ",a[i]);
                        }
}
int binary(int x)
{
            int rem,arr[9];
            int ctr=0,i=1;
            do
            {
                        rem=x%2;
                        arr[i]=rem;
                        if(rem==1)
                        {
ctr++;
                        }
                        x=x/2;
                        i++;
            }
            while(x!=0);
            if(ctr%2==0)
            {
                        arr[0]=0;
            }

            else
            {
                        arr[0]=1;
            }
            return(0);

}

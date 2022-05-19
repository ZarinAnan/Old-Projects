#include<stdio.h>
int main()
{
int i,j,n,page[50],frame[10],no,k,available,count=0;
            printf("\nenter the length of the Page:\n");
   scanf("%d",&n);
            printf("\n enter the Page number:\n");
            for(i=1;i<=n;i++)
            scanf("%d",&page[i]);
            printf("\n enter the number of Frames:");
            scanf("%d",&no);
   for(i=0;i<no;i++)
             frame[i]= -1;
                        j=0;
                        printf("\tref string\t page frames\n");
      for(i=1;i<=n;i++)
                         {
                                    printf("%d\t\t",page[i]);
                                    available=0;
                                    for(k=0;k<no;k++)
          if(frame[k]==page[i])
                                                available=1;
                                    if (available==0)
                                    {
                                                frame[j]=page[i];
                                                j=(j+1)%no;
                                                count++;
                                                for(k=0;k<no;k++)
                                                printf("%d\t",frame[k]);
         }
                                    printf("\n\n");
       }
                        printf("Page miss Is %d",count);



                        return 0;
}

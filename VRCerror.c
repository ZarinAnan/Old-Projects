#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[9],arr1[9],char chr,char chr1,temp,temp 1,i;
    printf("Enter the data");
    scanf("%c%c",&chr,&chr1);
    temp=chr;
    binary(temp);
    printf("\nAscii value is: %d\n,temp");
    printf("\nBinary form: ");
    for(i=0;i<8;i++)
    {
        arr1[i]=arr[i];
        printf("%d",arr[i]);
    }
    printf("\n");
    parity(arr);

    temp1=chr1;
    binary(temp1);
    printf("\n\nAscii value is: %d\n",temp1);
    printf("\nBinary Form : ");
    for(i=0;i<8;i++)
    {
        printf("%d",arr[i]);
    }
    parity(arr);
    getch();



}

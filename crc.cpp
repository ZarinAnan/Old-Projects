#include<iostream>
#include<math.h>
#include<cstring>
using namespace std;
char exor(char a,char b);

 int main()
 {
     char divi[20],data[20];
     cout<<"ENter the data: ";
     cin>>data;

     cout<<"Enter the divisor: ";
      cin>>divi;
      int datalen=strlen(data);
      int divilen=strlen(divi);
      for(int i=0;i<divilen;i++)
          data[datalen+i]='0';
      data[datalen+divilen-1]='\0';

      int codelen=datalen+divilen-1;
      char temp[20],rem[20];
      for(int i=0;i<divilen;i++)
        rem[i]=data[i];
      for(int j=divilen;j<=codelen;j++)
      {
          for(int i=0;i<divilen;i++)
            temp[i]=rem[i];
          if(rem[0]=='0')
          {
              for(int i=0;i<divilen-1;i++)
                rem[i]=temp[i+1];
          }
          else{
            for(int i=0;i<divilen-1;i++)
                rem[i]=exor(temp[i+1],divi[i+1]);

          }
          if(j!=codelen)
          {
              rem[divilen-1]=data[j];
          }

          else
          {
             rem[divilen-1]='\0';
          }

      }
      for(int i=0;i<divilen-1;i++)
      {
          data[datalen+i]=rem[i];

      }
      data[codelen]='\0';
      cout<<"CRC= "<<rem<<"\nCodeword:  "<<data;
 }

char exor(char a,char b)
 {
     if(a==b)
        return '0';
     else
        return '1';
 }

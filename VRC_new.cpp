#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Number of bits: ";
    cin>>n;
    int arr[n], i, elem,elem2,count=0;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int arr6[n];

    cout<<"Sender side DATA: ";

    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
        arr6[i]=arr[i];

    }
    cout<<endl;

    for(i=0; i<n; i++)
    {
        if(arr[i]==1)
        {
            count++;
        }
    }

    elem=1;
    n=n+1;
    if(count%2 !=0)
    {
        arr[i] = elem;
    }
    elem2=0;
    if(count%2 ==0)
    {
        arr[i] = elem2;
    }

    cout<<"\nVRC: ";
    int arr5[n];
    for(int j=0; j<n; j++)
    {
        cout<<arr[j]<<"  ";
        arr5[j]=arr[j];

    }
    int arr7[n];
    cout<<"\n\n\t\tEnter Receiver Side Data: ";
    for(int l=0; l<n; l++)
    {
        cin>>arr7[l];
    }
    int receive2;
    for(int l=0; l<n; l++)
    {
        receive2=arr7[l];
    }

    //cout<<receive2<<endl;

    int s=sizeof(arr)/sizeof(arr[0]);
    int receive;

    for(int l=0; l<n; l++)
    {
        receive=arr5[l];
    }
   // cout<<endl<<receive;

    if(receive2==receive)
    {
        cout<<"Accepted data: ";
        for(int l=0;l<n;l++)
        {
            cout<<"\t"<<arr7[l]<<" ";
        }
    }
    else
    {
        cout<<"\n\t\tError in data !!!!"<<endl;
    }

    cout<<endl;

}

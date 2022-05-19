#include<iostream>
using namespace std;
int main()
{
    int i,j, n,m;
    float arr[5],arr1[5];

    cout << "Enter total number of elements(1 to 100): ";
    cin >> n;
    cout << endl;
    for(i=0; i<n; i++)
    {

        cin>> arr[i];
        arr1[i]=arr[i];

    }
    for(i=0; i<n; i++)
    {
        if(arr[0] < arr[i])
        {


            arr[0]=arr[i];
             j=i;
        }
    }
    cout<<"max"<<arr[0];
    cout<<"\n enter a new value in the max position: ";

    cin>>arr1[j];
    for(i=0; i<n; i++){
         cout<<arr1[i]<<" ";
    }

    return 0;
}

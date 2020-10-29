#include<iostream>
using namespace std;

void bubblesort(int a[],int n)
{    int r=0;
    for(int i=0;i<n;i++)
    {   int f=0; r++;
        for(int j=0;j<n-i-1;j++)
        {   
            if(a[j]>a[j+1])
            {  f=1;
               int temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
        if(f==0) break;
    }
    cout<<"no of rounds:="<<r<<endl;
}

int main()
{
    int n;
    cout<<"enter size of array:"<<endl;
    cin>>n;
    int arr[n];

    cout<<"enter elements of array:"<<endl;
    for(int i=0;i<n;i++)
     cin>>arr[i];
    
    cout<<"unsorted array:"<<endl;
    for(int i=0;i<n;i++)
     cout<<arr[i]<<"  ";

    cout<<endl<<"sorted array:"<<endl;

    bubblesort(arr,n);

    for(int i=0;i<n;i++)
     cout<<arr[i]<<"  ";



    return 0;
}
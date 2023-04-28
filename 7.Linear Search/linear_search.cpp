//Program for linear search
#include<iostream>
using namespace std;
int linearsearch(int arr[],int n,int key)
{
  for(int i=0;i<n;i++)
  {
      if(arr[i]==key)
      {
          return i;
      }
  }
}

int main()
{
    int n;
    cout<<"Enter number of elements"<<endl;
    cin>>n;
    int arr[n];
     cout<<"Enter array elements:";
    for(int i=0;i<n;i++)
      {
       
        cin>>arr[i];
        }

    int key;
    cout<<"Enter key element to search:"<<endl;
    cin>>key;
    cout<<"The position of key element in array is:";
    cout<<linearsearch(arr,n,key)<<endl;
}
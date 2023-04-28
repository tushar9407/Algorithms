#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
    int k = *a;
    *a = *b;
    *b = k;
}
int pivot(int arr[],int l,int r)
{
  int choose = arr[r];
  int i = l-1;
  for(int j=l;j<r;j++)
  {
      if(choose>arr[j])
      {
          i++;
          swap(&arr[i],&arr[j]);
      }
  }
  swap(&arr[i+1],&arr[r]);
  return(i+1);
}
void quicksort(int arr[],int l,int r)
{
    if(r>l)
    {
        int t = pivot(arr,l,r);

        quicksort(arr,l,t-1);
        quicksort(arr,t+1,r);
    }
}
void takedata(int arr[],int size)
{
   // cout<<"Enter numbers of array elements:";
    //cin>>size;
    //cout<<"Enter array elements:";
    for(int i=0;i<size;i++)
    {
    cin>>arr[i];
    }
}

void printarray(int arr[],int size)
{
    int i;
    for(i=0;i<size;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}
int main()
{
     int arr[10];
     //int n = sizeof(arr)/sizeof(arr[0]);
     int size;
     cout<<"Enter 5 array elements:";
     //cin>>size;
     takedata(arr,5);
     quicksort(arr,0,5-1);
     cout<<"Sorted array:";
     printarray(arr,5);
     return 0;
}
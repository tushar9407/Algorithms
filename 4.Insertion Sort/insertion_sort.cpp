//  Program for insertion sort
#include <iostream>
using namespace std;
 
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
 

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
 
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
    int main()
{   
    int n ;
    cout<<"Enter the size of an array:"<<endl;
    cin >> n ;

    int arr[n] = {0};
    cout<<"Enter array  elements::"<<endl;
    for( int i= 0 ; i < n ; i++){
        cin>>arr[i] ;
    }
    
     cout<<"Sorted array is:"<<endl;
    insertionSort(arr, n);
    printArray(arr, n);
 
    return 0;
}



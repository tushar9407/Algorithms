// Program for selection sort
#include<iostream>
using namespace std;

void swap(int &x, int &y)
{         
int temp = x;
   x = y;
   y = temp;
}

void display(int a[], int n) {
   for(int i = 0; i<n; i++)
   {
      cout << a[i] << " ";
   }
   cout << endl;
}

void sort(int a[], int n) {
   int i, j, min;
   for(i = 0; i<n-1; i++) {
      min = i;   
      for(j = i+1; j<n; j++){
         if(a[j] < a[min])
           { 
              min = j;
           }
      }
         swap(a[min], a[i]);
   }
}
int main() {
   int n;
   cout << "Enter the size of array : ";
   cin >> n;
   int arr[n];         
   cout << "Enter the elements of array : " << endl;
   for(int i = 0; i<n; i++)
    {
      cin >> arr[i];
    }
   cout << "Array elements before Sorting: ";

   display(arr, n);
   sort(arr, n);
   cout << "Array elements after Sorting: ";
   display(arr, n);
   return 0;
}
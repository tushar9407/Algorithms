// Program to implement merge sort.

#include <iostream>
using namespace std;
class msort
{
    int arr[10];

public:
    int n;
    int low, high;
    void getdata();
    void mergesort(int low, int high);
    void combine(int low, int mid, int high);
    void display();
};
void msort::getdata()
{
    cout << "Enter the lenth of array:";
    cin >> n;
    cout << "\nEnter array elements:";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
}
void msort::mergesort(int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;

        mergesort(low, mid);
        mergesort(mid + 1, high);
        combine(low, mid, high);
    }
}
void msort::combine(int low, int mid, int high)
{
    int i, j, k;
    int temp[10];
    k = low;
    i = low;
    j = mid + 1;
    while (i <= mid && j <= high)
    {
        if (arr[i] <= arr[j])
        {
            temp[k] = arr[i];
            i++;
            k++;
        }

        else
        {
            temp[k] = arr[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }
    while (j <= high)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }
    for (k = low; k <= high; k++)
        arr[k] = temp[k];
}
void msort::display()
{
    cout << "\nSorted array is ";
    for (int i = 0; i < n; i++)
        cout << " " << arr[i];
}
int main()
{
    msort obj;
    obj.getdata();
    obj.low = 0;
    obj.high = obj.n - 1;
    obj.mergesort(obj.low, obj.high);
    obj.display();
    return 0;
}
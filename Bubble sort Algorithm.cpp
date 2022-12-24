#include <iostream>
using namespace std;


void Swap(int &n1, int &n2)
{
    int temp = n1;
    n1 = n2;
    n2 = temp;
}

void BubbleSort(int* arr, int size)
{
    bool swapped = false;
    for (int j = 0; j < size - 1; j++)
    {
        for (int i = 0; i < size - j - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                Swap(arr[i], arr[i + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            cout << "Array is already sorted" << endl;
            break;
        }
    }
}


void Display(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}



int main()
{
    int arr[6] = {6,5,3,1,2,4};
    Display(arr, 6);
    BubbleSort(arr,6);
    cout << "Sorted array:" << endl;
    Display(arr, 6);
}

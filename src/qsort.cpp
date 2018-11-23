#include <iostream>
#include <algorithm>
#include <string>
#include <time.h>

using namespace std;

int* CreateRandomArray(int length) 
{
    srand(time(NULL));

    int* result = new int[length];
    for(size_t i = 0; i < length; i++) 
    {
        result[i] = rand() % 100 + 1;
    }

    return result;
}

void PrintArray(int* arr, int start, int end)
{
    for(size_t i = start; i <= end; i++)
    {
        cout << " " << arr[i];
    }
    cout << endl;
}

void swap(int* a, int* b) 
{
    int* tmp = a;
    a = b;
    b = tmp; 
}

int Qpartition(int* arr, int start, int end)
{
    PrintArray(arr, start, end);
    size_t low = start;
    size_t high = end;
    int pivot = arr[(high + low) / 2];
    while (low <= high) 
    {
        while (arr[low] < pivot)
            low++;
        while (arr[high] > pivot)
            high--;
        if(low >= high)
            break; 
        cout << "swap " << low << ":" << high << endl;
        swap(arr[low++], arr[high--]);
        PrintArray(arr, start, end);
    }
    return high;
}

void Qsort(int* arr, int start, int end) 
{
    int pivot = Qpartition(arr, start, end);
    if (start < end)
    {
        Qsort(arr, 0, pivot);
        Qsort(arr, pivot + 1, end);
    }
    else 
        return;
}

int main(int argc, char** argv)
{
    int len = 10;
    int arr[10] = {8, 94, 40, 37, 10, 23, 81, 47, 13, 32}; // CreateRandomArray(len);
    Qsort(arr, 0, len - 1);
    cout << "Result: ";
    PrintArray(arr, 0, 9);
    cout << endl;
}


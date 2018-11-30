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

void xorSwap(int* a, int* b)
{
    *a = *a ^ *b;
    *b = *b ^ *a;
    *a = *a ^ *b;
}

int main(int argc, char** argv)
{
    int arrLen = 100;
    int* arr = CreateRandomArray(arrLen);
    PrintArray(arr, 0, arrLen);

    bool swap = true;
    while(swap) 
    {
        swap = false;
        for (size_t i = 0; i < arrLen; i++)
        {
            if (arr[i] > arr[i+1]) 
            {
                xorSwap(&arr[i], &arr[i+1]);
                swap = true;
            }
        }
    }

    PrintArray(arr, 0, arrLen);
    return 0;
}
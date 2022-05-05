#include <iostream>
#include <algorithm>
using namespace std;
template <typename T>
void sort_b(T elem[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (elem[j] > elem[j + 1])
            {
                T temp = elem[j];
                elem[j] = elem[j + 1];
                elem[j + 1] = temp;
            }
}
template <typename T>

int partition(T arr[], int start, int end)
{

    int pivot = arr[start];

    int count = 0;
    for (int i = start + 1; i <= end; i++) {
        if (arr[i] <= pivot)
            count++;
    }

    
    int pivotIndex = start + count;
    swap(arr[pivotIndex], arr[start]);

    
    int i = start, j = end;

    while (i < pivotIndex && j > pivotIndex) {

        while (arr[i] <= pivot) {
            i++;
        }

        while (arr[j] > pivot) {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex) {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}
template <typename T>
void sort_q(T arr[], int end, int start = 0)
{
    if (start >= end)
        return;


    int p = partition(arr, start, end);

    sort_q(arr, start, p - 1);

    sort_q(arr, p + 1, end);
}
template <typename T>
void sort_w(T tab[], int size)
{
    int temp, j;

    for (int i = 1; i < size; i++)
    {
        temp = tab[i];

        for (j = i - 1; j >= 0 && tab[j] > temp; j--)
        {
            tab[j + 1] = tab[j];
        }
        tab[j + 1] = temp;
    }
}
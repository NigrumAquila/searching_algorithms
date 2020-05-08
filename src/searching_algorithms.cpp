#include "searching_algorithms.h"


int linearSearch(int arr[], int size, int x)
{
for (int i = 0; i < size; i++)
    if (arr[i] == x)
        return i;
return -1;
}


int binarySearch(int arr[], int lhs, int rhs, int x)
{
    if (rhs >= lhs) {
        int mid = lhs + (rhs - lhs) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearch(arr, lhs, mid - 1, x);
        return binarySearch(arr, mid + 1, rhs, x);
    }

    return -1;
}


int jumpSearch(int arr[], int size, int x)
{
    int step = sqrt(size);
    int prev = 0;

    while (arr[std::min(step, size) - 1] < x)
    {
        prev = step;
        step += sqrt(size);
        if (prev >= size)
            return -1;
    }

    while (arr[prev] < x)
    {
        prev++;
        if (prev == std::min(step, size))
            return -1;
    }
    if (arr[prev] == x)
        return prev;

    return -1;
}


int interpolationSearch(int arr[], int size, int x)
{
    int lo = 0, hi = (size - 1);

    while (lo <= hi && x >= arr[lo] && x <= arr[hi])
    {
        if (lo == hi)
        {
            if (arr[lo] == x) return lo;
            return -1;
        }

        int pos = lo + (((double)(hi - lo) /
            (arr[hi] - arr[lo])) * (x - arr[lo]));

        if (arr[pos] == x)
            return pos;
        if (arr[pos] < x)
            lo = pos + 1;
        else
            hi = pos - 1;
    }
    return -1;
}

int exponentialSearch(int arr[], int size, int x)
{
    if (arr[0] == x)
        return 0;

    int i = 1;
    while (i < size && arr[i] <= x)
        i = i * 2;

    return binarySearch(arr, i / 2, std::min(i, size), x);
}
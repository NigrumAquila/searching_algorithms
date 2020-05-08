#include <iostream>
#include "src/searching_algorithms.h"

using namespace std;


int main()
{
    int arr[] = {
        1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
        11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
        21, 22, 23, 24, 25, 26, 27, 28, 29, 30,
        31, 32, 33, 34, 35, 36, 37, 38, 39, 40,
        41, 42, 43, 44, 45, 46, 47, 48, 49, 50
    };
    int size = *(&arr + 1) - arr;
    int x = 27;

    //auto result = linearSearch(arr, size, x);
    //auto result = binarySearch(arr, 0, size - 1, x);
    //auto result = jumpSearch(arr, size, x);
    //auto result = interpolationSearch(arr, size, x);
    auto result = exponentialSearch(arr, size, x);

    (result == -1) ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result << endl;
    return 0;
}

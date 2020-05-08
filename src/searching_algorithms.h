#pragma once
#include <cstddef>
#include <algorithm>

int linearSearch(int arr[], int size, int x);
int binarySearch(int arr[], int lhs, int rhs, int x);
int jumpSearch(int arr[], int size,int x);
int interpolationSearch(int arr[], int size, int x);
int exponentialSearch(int arr[], int size, int x);
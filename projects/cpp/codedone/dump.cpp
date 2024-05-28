#include<iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[]= {34,342,34,532,5};

    sort(arr, arr + sizeof(arr) / sizeof(arr[0]));
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
    std::cout << arr[i] << " ";
  }
    return 0;
}
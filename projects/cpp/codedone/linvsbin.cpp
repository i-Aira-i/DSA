#include<iostream>
using namespace std;


int linearSearch(int arr[], int size, int element) {
    for(int i = 0; i < size; i++) {
        if(arr[i]== element) {
            return i;
        }
    }
    return -1;
}



int binarySearch(int arr[], int size, int element) {
    int low, mid, high;

    low = 0;
    high = size-1;

    //start searching
    while(low<=high){
        mid = (low + high)/2;
        if(arr[mid] == element) {
            return mid;
        }
        if(arr[mid] < element) {
            low = mid+1;
        } else{
            high = mid-1;
        }
    }
    //searching end
    return -1;

}
int main()
{
    //int arr[] = {82,2,22,2,1,33323,32,2,239,3399};
    //int size = sizeof(arr)/sizeof(int);

    //int searchIndex = linearSearch(arr,size, 1);

    //cout<<(searchIndex);

    //sorted array for binarysearch
    int arr[] = {2,22,25,28,155,333,345,675,3399};
    int size = sizeof(arr)/sizeof(int);

    int searchIndex = binarySearch(arr,size, 3399);

    cout<<(searchIndex);
    
    
    return 0;
}




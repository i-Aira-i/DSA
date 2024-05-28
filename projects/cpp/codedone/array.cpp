#include<iostream>
using namespace std;

void display(int arr[], int n){
    //traversal
    for(int i=0; i <n; i++){
        cout << arr[i] << " ";
    }
    cout <<endl;
}

int indInsertion(int arr[], int &size, int element, int capacity, int index) {
    //insertion
    if(size >= capacity){
        cout << "Error: Array is full, cannot insert element." << endl;
        return -1;
    }
    for(int i = size -1 ; i >=index; i--) {
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    size++;
    cout << "Insertion successful!" << endl;
    return 1;
}


void indDelete(int arr[], int &size, int index) 
{
    //deletion
    for(int i = index; i <size-1; i++) {
        arr[i] = arr[i+1];
    }
    size--;
}



int main()
{
    int arr[100] = {1,3,4,58,50};
    int size = 5, element = 45, index = 3;
    display(arr, size);

    int result = indInsertion(arr, size, element, 100, index);
    if(result == 1){
        display(arr, size);
    }

    indDelete(arr,size,0);
    display(arr,size);

    return 0;
}

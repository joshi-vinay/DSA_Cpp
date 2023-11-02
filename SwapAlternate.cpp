#include<iostream>
using namespace std;

void swapAlternate(int arr[], int n){
    for(int i = 0; i<n; i += 2){
        if(i+1 < n){
            swap(arr[i], arr[i+1]);
        }
    }
}

void printArray(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}




int main(){
    int arr[100];
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    cout<<"Enter the elements inside the array: ";
    for(int i = 0; i<size; i++){
        cin>>arr[i];
    }

    cout<<"Array after swapping alternate elements is: "<<" ";
    swapAlternate(arr,size);
    printArray(arr, size);


    return 0;
}
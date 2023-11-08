#include<iostream>
using namespace std;

// TRIPLET Sum


void tripletSum(int arr[], int n, int s){
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            for(int k = j+1; k<n; k++){
                if(arr[i]+arr[j]+arr[k] == s){
                    cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")";
                }
            }
        }
    }
}

int main(){
    int arr[100];
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int sum;
    cout<<"Enter the value of sum: ";
    cin>>sum;
    cout<<"Enter the elememnts inside the array: ";
    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }

    cout<<"The triplet sum pairs are: ";
    tripletSum(arr, size, sum);
      
    return 0;
}

#include<iostream>
// #include<bits/stdc++.h>
// #include<algorithm>
using namespace std;

void reverseArray(int arr[], int n){
    int start = 0;
    int end = n-1;
    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
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
    cout<<"Enter the elements of the array:"<<" ";
    for(int i = 0; i<size; i++){
        cin>>arr[i];
    }
    // cout<<endl;

    cout<<"The reverse array is: "<<endl;

    reverseArray(arr,size);
    printArray(arr,size);


    // cout<<"The reverse array is: "<<reverseArray(arr,size);
    // printArray(arr,size);
    return 0;
}



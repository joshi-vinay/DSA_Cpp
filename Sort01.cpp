#include<iostream>
using namespace std;

//  Sort 0 1


void sortOne(int arr[], int n){
    int i = 0,  j= n-1;
    while(i<j){
        while(arr[i] == 0){
            i++;
        }
        while(arr[j] == 1){
            j--;
        }

    //  agar yaha pahuch gaye ho to iska matlab ha
    //  arr[i] == 1 and arr[j] == 0
        if(i<j)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
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
    int arr[8] = {1, 1, 0, 0, 0 ,0, 1, 0};
    // int arr[100];
    // int size;
    // cout<<"Enter the size of the array: ";
    // cin>>size;
    // cout<<"Enter the elememnts inside the array: ";
    // for(int i = 0; i < size; i++){
    //     cin>>arr[i];
    // }


    sortOne(arr, 8);
    printArray(arr, 8);


    return 0;

}

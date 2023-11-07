#include<iostream>
using namespace std;

// Pair Sum

void pairSum(int arr[], int size, int s){
    for(int i = 0; i < size; i++){
    for(int j = i+1; j < size; j++){
        if(arr[i]+arr[j] == s){
            // cout<<(arr[i], arr[j]);  // Wrong syntax to print the pairs..
            cout << "(" << arr[i] << ", " << arr[j] << ") ";
        }
    }
}
}

int main(){

    int arr[100];
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int sum;
    cout<<"Enter the value of sum: ";
    cin>>sum;
    cout<<"Enter the elements inside the array: "<<" ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    
    cout<<"The pair sum pairs are: ";
    pairSum(arr, n, sum);
    
    
    return 0;
}
